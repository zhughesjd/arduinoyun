#include <Console.h>

//Arduino test code:
int redpin = 11;    // select the pin for the red LED
int bluepin =10;    // select the pin for the blueLED
int val;

void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
    Bridge.begin();
    Console.begin();
}

void loop() 
{
for(val=255; val>0; val--)
  {
   analogWrite(11, val);
   analogWrite(10, 255-val);
   delay(15); 
  }
for(val=0; val<255; val++)
  {
   analogWrite(11, val);
   analogWrite(10, 255-val);
   delay(15); 
  }
 Console.println(val, DEC);
}


