/* Laser transmitter module test project
*/
#include <Console.h>
char val;
void setup()
{
    Bridge.begin();
    Console.begin();
    pinMode(13, OUTPUT);  
}
void loop() {
   val=Console.read();
   if(val=='1')
  {
     digitalWrite(13, HIGH);  
   }
  if(val=='0')
  {
    digitalWrite(13, LOW);  
   }
  
}
