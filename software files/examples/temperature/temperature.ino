#include <Arduino.h>


#define I2C_SDA 21   // Suitable SDA pin on NodeMCU S2
#define I2C_SCL 22   // Suitable SCL pin on NodeMCU S2
    
#include <Wire.h>

#include "MLX90641_API.h"
#include "MLX9064X_I2C_Driver.h"
#include "MLX90641_API.cpp"
#include "MLX9064X_I2C_Driver.cpp"

#define debug  Serial





const byte MLX90641_address = 0x33; //Default 7-bit unshifted address of the MLX90641

#define TA_SHIFT 8 //Default shift for MLX90641 in open air

static float mlx90641To[768];
paramsMLX90641 mlx90641;

//Returns true if the MLX90641 is detected on the I2C bus
boolean isConnected() {
    Wire.beginTransmission((uint8_t)MLX90641_address);
    if (Wire.endTransmission() != 0) {
        return (false);    //Sensor did not ACK
    }
    return (true);
}

void setup() {
    Wire.begin(1,2);
    Wire.setClock(400000); //Increase I2C clock speed to 400kHz

    debug.begin(115200);
    while (!debug); //Wait for user to open terminal
    debug.println("MLX90641 IR Array Example");
    if (isConnected() == false) {
        debug.println("MLX90640 not detected at default I2C address. Please check wiring. Freezing.");
        while (1);
    }
    debug.println("MLX90640 online!");
    debug.println("MLX90641 online!");

    //Get device parameters - We only have to do this once
    int status;
    uint16_t eeMLX90641[832];
    status = MLX90641_DumpEE(MLX90641_address, eeMLX90641);
    if (status != 0) {
        debug.println("Failed to load system parameters");
    }

    status = MLX90641_ExtractParameters(eeMLX90641, &mlx90641);
    if (status != 0) {
        debug.println("Parameter extraction failed");
    }
    MLX90641_SetRefreshRate(MLX90641_address, 0x07); //Set rate to 64H
    //Once params are extracted, we can release eeMLX90641 array
}

void loop() {
    for (byte x = 0 ; x < 2 ; x++) { //Read both subpages
        uint16_t mlx90641Frame[834];
        int status = MLX90641_GetFrameData(MLX90641_address, mlx90641Frame);
        if (status < 0) {
            debug.print("GetFrame Error: ");
            debug.println(status);
        }

        float vdd = MLX90641_GetVdd(mlx90641Frame, &mlx90641);
        float Ta = MLX90641_GetTa(mlx90641Frame, &mlx90641);

        float tr = Ta - TA_SHIFT; //Reflected temperature based on the sensor ambient temperature
        float emissivity = 0.95;

        MLX90641_CalculateTo(mlx90641Frame, &mlx90641, emissivity, tr, mlx90641To);
    }
  
    for (int x = 0 ; x < 192 ; x++) {
        debug.print(mlx90641To[x], 2);
        debug.print(",");
    }
    debug.println(""); 
}

