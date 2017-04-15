#include <Console.h>
int sensorPin = 5;
int value = 0;
void setup() {
  Bridge.begin();
  Console.begin();
  while (!Console);
  pinMode(7, OUTPUT);
}
void loop() {
  value = analogRead(0);
  Console.print("X:");
  Console.print(value, DEC);
  value = analogRead(1);
  Console.print(" | Y:");
  Console.print(value, DEC);
  value = digitalRead(7);
  Console.print(" | Z: ");
  Console.println(value, DEC);
  delay(100);
}

