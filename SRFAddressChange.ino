/* SRF02 Address Changer
   
   Simple I2C address changer.
   
   by Tausif Sharif
*/

#include <Wire.h>
#include <SRF02.h>

void setup()
{
  Serial.begin(9600);
  Wire.begin();
  
  I2C_Scanner();
  
  SRF02::configureDeviceId(0x70, 0x71);
  Serial.println("Done changing addresses");
}

void loop()
{
  I2C_Scanner();
}
