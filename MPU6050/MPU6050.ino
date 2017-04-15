//Needs work

#include "Console.h"
#include "Wire.h"
#include "I2Cdev.h"
#include "MPU6050.h"
MPU6050 accelgyro;
 
int16_t ax, ay, az;
int16_t gx, gy, gz;
 
bool blinkState = false;
 
void setup() {
    Bridge.begin();
    Console.begin();
    while(!Console);
    Wire.begin();
    accelgyro.initialize();
 }
 void loop() {
 
    accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
    Console.print("a/g:\t");
    Console.print(ax/16384); Console.print("\t");
    Console.print(ay/16384); Console.print("\t");
    Console.print(az/16384); Console.print("\t");
    Console.print(gx/131); Console.print("\t");
    Console.print(gy/131); Console.print("\t");
    Console.println(gz/131);
    blinkState = !blinkState;
 
}

