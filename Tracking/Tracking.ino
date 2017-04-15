/*  TCRT5000 infrared/optical tracking sensor project
*/

int Led = 13 ;// connect LED to arduino D6
int input_pin = 3; // connect TCRT5000 module S pin to arduino D8
int val ;// define numeric variables val
void setup ()
{
  pinMode (Led, OUTPUT) ;// define LED as output interface
  pinMode (input_pin, INPUT) ;// define Tracking sensor output interface
}
void loop ()
{
  val = digitalRead (input_pin) ;
  if (val == HIGH) // When the Tracking sensor detects a signal, LED flashes
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
}
