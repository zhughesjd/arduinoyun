#include <IRremote.h> //adds the library code to the sketch
const int irReceiverPin = 8; //receiver module S pin is connected to arduino D8
const int ledPin = 7; 
IRrecv irrecv(irReceiverPin);  
decode_results decodedSignal;  

void setup()
{
    pinMode(ledPin, OUTPUT);
    irrecv.enableIRIn();
}
boolean lightState = false;
unsigned long last = millis();

void loop()
{
    if (irrecv.decode(&decodedSignal) == true) //this is true if a message has been received
    {
        if (millis() - last > 250) {
            //has it been 1/4 sec since last message
            lightState = !lightState;
            //toggle the LED
            digitalWrite(ledPin, lightState);
        }
        last = millis();
        irrecv.resume();
        // watch out for another message
    }
}
