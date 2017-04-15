int buzzer = 8; // Set the control the buzzer digital IO pin
void setup()
{
  pinMode(buzzer, OUTPUT); // Setting the digital IO pin mode , OUTPUT is Wen out
}
void loop()
{
  unsigned char i, j; // Define the variable
  while (1)
  {
    for (i = 0; i < 80; i++) // Wen a frequency sound
    {
      digitalWrite(buzzer, HIGH); // Sound
      delay(1);//delay 1ms
      digitalWrite(buzzer, LOW); //Not sound
      delay(1);// delay 1ms
    }
    for (i = 0; i < 100; i++) // Wen out another frequency sound
    {
      digitalWrite(buzzer, HIGH); // Sound
      delay(2);//delay 2ms
      digitalWrite(buzzer, LOW); // Not sound
      delay(2);//delay 2ms
    }
  }
}
