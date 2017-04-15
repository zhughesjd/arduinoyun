/* use Relay module and HC06 bluetooth receiver to turn on/off LEd wirlessly
 */
#include <Console.h>

int relay = 10; 
void setup()
{
    Bridge.begin();
    Console.begin();
    while(!Console);
   pinMode(relay,OUTPUT); 
 }
void loop()
{
   char val,old_val; 
  val = Console.read(); 
  old_val=val;
  if (old_val=='1' ) 
 {
   digitalWrite(relay,HIGH); 
  }
  if(old_val=='0')  
  {
    digitalWrite(relay,LOW); 
  }
 }
