
#include <OneWire.h>
#include <Console.h>
#include <math.h>

double Thermister(int RawADC)
{
  double Temp;
  Temp = log(((10240000 / RawADC) - 10000));
  Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp )) * Temp );
  Temp = Temp - 273.15;            // Convert Kelvin to Celcius
  return Temp;
}
void setup() {
  Bridge.begin();
  Console.begin();
  while (!Console);
}
void loop() {
  Console.print(Thermister(analogRead(0)));  // display Fahrenheit
  Console.println("c");
  delay(500);
}

