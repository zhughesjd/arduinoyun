
#include <OneWire.h>
#include <Console.h>
int inPin=10; // define D10 as input pin connecting to DS18S20 S pin
OneWire ds(inPin); 
 
void setup(void) {
    Bridge.begin();
    Console.begin();
    while(!Console);
   }
 
void loop(void) {
  int HighByte, LowByte, TReading, SignBit, Tc_100, Whole, Fract;
  byte i;
  byte present = 0;
  byte data[12];
  byte addr[8];
 
  if ( !ds.search(addr)) {
      ds.reset_search();
      return;
  }
 
 
  ds.reset();
  ds.select(addr);
  ds.write(0x44,1); 
 
  delay(1000);  
 
 
  present = ds.reset();
  ds.select(addr);    
  ds.write(0xBE);  
 
 
 
  for ( i = 0; i < 9; i++) { 
    data[i] = ds.read();
  }
  Console.print("Temperature: ");
  LowByte = data[0];
  HighByte = data[1];
  TReading = (HighByte << 8) + LowByte;
  SignBit = TReading & 0x8000;  
  if (SignBit)
  {
    TReading = (TReading ^ 0xffff) + 1;
  }
  Tc_100 = (6 * TReading) + TReading / 4; 
  Whole = Tc_100 / 100; 
  Fract = Tc_100 % 100;
  if (SignBit)
  {
     Console.print("-");
  }
  Console.print(Whole);
  Console.print(".");
  if (Fract < 10)
  {
     Console.print("0");
  }
  Console.print(Fract);
  Console.print(" C\n");
}
