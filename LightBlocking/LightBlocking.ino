/* photo interrupt sensor module test code
*/
int Led = 13;
int val;
void setup()
{
  pinMode(Led, OUTPUT);
  pinMode(3, INPUT);
}
void loop()
{
  val = digitalRead(3);
  if (val == HIGH)
  {
    digitalWrite(Led, HIGH);
  }
  else
  {
    digitalWrite(Led, LOW);
  }
}
