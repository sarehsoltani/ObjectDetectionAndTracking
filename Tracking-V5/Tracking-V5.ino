#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11);
void setup()
{
mySerial.begin(19200);               // the GPRS baud rate   
Serial.begin(19200);               // the GPRS baud rate   
delay(2000);
mySerial.println("ATD+989164450465;"); // xxxxxxxxx is the number you want to dial.  

if(mySerial.available())

Serial.print((unsigned char)mySerial.read());


delay(10000); 
delay(10000); 

mySerial.println("ATH"); //End the call.
if(mySerial.available())

Serial.print((unsigned char)mySerial.read());
}


void loop()
{
//Do nothing
}
