#include <Console.h>
#include <Ultrasonic.h>
#define CM 1      //Centimeter
#define INC 0     //Inch
#define TP 8      //Trig_pin
#define EP 9      //Echo_pin  

void setup()
{
  Bridge.begin();
  Console.begin();
  while (!Console);
  pinMode(TP, OUTPUT);      // set TP output pin for trigger
  pinMode(EP, INPUT);       // set EP input pin for echo
  Console.println("-------------------Ultra_Demo_Start---------------------------------");
}
void loop()
{
  long microseconds = TP_init();   // trigger and receive
  Console.print("microseconds = ");
  Console.println(microseconds);
  long distacne_cm = Distance(microseconds, CM); // Calculating the distance
  Console.print("Distacne_CM = ");
  Console.println(distacne_cm);   // printf the distance about CM
  delay(3000);
}

