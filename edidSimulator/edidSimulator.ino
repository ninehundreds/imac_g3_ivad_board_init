
#include <Wire.h>


/*
 * 
 * This sketch sends edid information when requested via i2c on port 0x50.
 * The Edid information is for an iMac G3 DV and it sends the three supported modes.   
 * 
 * 1024x768 @ 75 Hz
 *  800x600 @ 95 Hz
 *  640x480 @ 117 Hz
 * 
 * In order for this program to work, the i2c transmit buffer length constants must be changed in
   two files. The Wire library has two buffers it uses for i2c transmissions

   "BUFFER_LENGTH" in
   "arduino_install_folder/hardware/arduino/avr/libraries/Wire/src/Wire.h" and

   "TWI_BUFFER_LENGTH" in
   "arduino_install_folder/hardware/arduino/avr/libraries/Wire/src/utility/twi.h"

   Both of these must be changed from 32 to 128 to be able to transmit the edid byte array in
   one shot.

   To test this program, you can directly wire SDA(pin 12),SCL(pin 15) and GND(pin 6) pins from your computers VGA port
   directly into the corresponding pins on the arduino.


*/



byte data = -1;
int counter = 0 ;
const int i2c_port = 0x50;



const byte edid[128] =
{

  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x06, 0x10, 0x74, 0x61,
  0xed, 0x5f, 0x84, 0x00, 0x06, 0x1e, 0x01, 0x03, 0x6d, 0x1a, 0x14, 0x78,
  0xea, 0x5e, 0xc0, 0xa4, 0x59, 0x4a, 0x98, 0x25, 0x20, 0x50, 0x54, 0x00,
  0x00, 0x00, 0x61, 0x4f, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xc3, 0x1e, 0x00, 0x30, 0x41, 0x00,
  0x34, 0x30, 0x14, 0x60, 0xd3, 0x00, 0x0a, 0xc8, 0x10, 0x00, 0x00, 0x1e,
  0x5f, 0x18, 0x20, 0xf0, 0x30, 0x58, 0x2c, 0x20, 0x15, 0x50, 0x93, 0x00,
  0xd0, 0x9c, 0x00, 0x00, 0x00, 0x18, 0x7d, 0x13, 0x80, 0xc0, 0x20, 0xe0,
  0x22, 0x10, 0x11, 0x40, 0x13, 0x00, 0xa6, 0x7d, 0x00, 0x00, 0x00, 0x18,
  0x00, 0x00, 0x00, 0xfd, 0x00, 0x3b, 0x3d, 0x3a, 0x3d, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19
};



void setup() {

  Wire.begin(i2c_port); // join i2c bus as slave
  Wire.onRequest(requestEvent); //event handler for requests from master
  Wire.onReceive(receiveData); // event handler when receiving from  master

}


void loop() {}




// function that executes whenever data is requested by master
// this function is registered as an event.
void requestEvent() {
  //delay(500);
  Wire.write(edid, 128);



}//end method
// function that executes whenever data is received by the slave


void receiveData(int byteCount) {


  while (Wire.available()) {
    data = Wire.read();
  }


}
