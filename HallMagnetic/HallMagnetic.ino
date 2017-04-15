/* Hall magnetic field sensor test project
   When magnetic field is detected by Hall Sensor Module,
   the LED on the sensor module will turn on and LED of D9 pin will turn off
*/
int LedPin=10;
int SensorPin=9;
int inputVal;
void setup()
{
pinMode(LedPin,OUTPUT);
pinMode (SensorPin,INPUT);
}
void loop()
{
inputVal=digitalRead(SensorPin);
if(inputVal==HIGH)
{
  digitalWrite(LedPin, HIGH); //if no magnetic field is detected, D9 LED is off
}
else
{
digitalWrite(LedPin, LOW); //if magnetic field is detected, D9 LED turns on
}
}
