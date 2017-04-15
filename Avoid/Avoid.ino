/*  ___   ___  ___  _   _  ___   ___   ____ ___  ____
   / _ \ /___)/ _ \| | | |/ _ \ / _ \ / ___) _ \|    \
  | |_| |___ | |_| | |_| | |_| | |_| ( (__| |_| | | | |
   \___/(___/ \___/ \__  |\___/ \___(_)____)___/|_|_|_|
                    (____/
   Infrared obstacle sensor module test project
   tutorial url: http://osoyoo.com/?p=679
*/
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
