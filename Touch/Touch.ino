//Needs work

int digit_sensor = 12; // select the input pin for the potentiometer
int ledPin = 3; // select the pin for the LED
int digitValue ;  //  value from the digit input pin
void setup () {
  pinMode (ledPin, OUTPUT);
  pinMode (digit_sensor, INPUT);
}
void loop () {

  digitValue = digitalRead(digit_sensor);

  if (digitValue == HIGH)
    digitalWrite (ledPin, HIGH);
  else digitalWrite (ledPin, LOW);
}
