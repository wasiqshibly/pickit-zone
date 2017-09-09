#include <EEPROM.h>
int incomingByte = 0;   
void setup() {
        Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {

        // send data only when you receive data:
        if (Serial.available() > 0) {
                int red = Serial.parseInt();

      
                Serial.println(red,DEC);
                EEPROM.write(9,red);
                delay(1000);
        }
        else
        {
     int k=EEPROM.read(9);
          Serial.println(k);
          delay(1000);
          
        }
}
 






