#include <Console.h>
int analog_sensor  = A0; // select the input pin for the potentiometer
int digit_sensor = 12; // select the input pin for the potentiometer
int ledPin = 3; // select the pin for the LED
int analogValue ; // value from the analog input pin
int digitValue ;  //  value from the digit input pin
void setup () {
  pinMode (ledPin, OUTPUT);
  pinMode (digit_sensor, INPUT);
  Bridge.begin();
  Console.begin();
  while(!Console);
}
void loop () {
  analogValue = analogRead (analog_sensor);
  digitValue = digitalRead(digit_sensor);
  Console.println (analogValue, DEC);
  if (digitValue == HIGH)
    digitalWrite (ledPin, HIGH);
  else digitalWrite (ledPin, LOW);


}
