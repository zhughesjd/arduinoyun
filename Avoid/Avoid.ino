#include <Console.h>
int Led = 13;
int buttonpin = 3;
int val;
void setup()
{
    Bridge.begin();
    Console.begin();
    while(!Console);
 
  pinMode(Led, OUTPUT);
  pinMode(buttonpin, INPUT);
}
void loop()
{
  val = digitalRead(buttonpin);
  Console.println(val);
  if (val == HIGH)
  {
    digitalWrite(Led, HIGH);
  }
  else
  {
    digitalWrite(Led, LOW);
  }
    delay(500);  

}
