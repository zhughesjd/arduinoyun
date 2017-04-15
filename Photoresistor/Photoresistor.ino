#include <Console.h>
int sensorPin = 2;
int value = 0;
void setup() {
  Bridge.begin();
  Console.begin();
  while (!Console);
}
void loop() {
  value = analogRead(sensorPin);
  Console.println(value, DEC);
  delay(50);
}


