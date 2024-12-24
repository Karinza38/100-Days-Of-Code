  /*
 Voltaat learn (http://learn.voltaat.com)
 Link for full tutorial:
 RFID reader library:

 Tutorial: Getting card ID using RFID reader

 It's important to be aware that the RFID reader module runs on 3.3V, not 5V.
 Therefore, it should be connected to the 3.3V pin.

 Connections from the RFID reader to the Arduino:
 • RFID 3.3V pin → Arduino VCC (3.3V) pin
 • RFID RST pin → Arduino pin 9
 • RFID GND pin → Arduino GND pin
 • RFID IRQ pin → unconnected
 • RFID MISO pin → Arduino pin 12
 • RFID MOSI pin → Arduino pin 11
 • RFID SCK pin → Arduino pin 13
 • RFID SDA pin → Arduino pin 10
 
*/

#include "MFRC522.h"   // Include the MFRC522 RFID library

#define SS_PIN 10       // Define the SS pin for the RFID reader
#define RST_PIN 9       // Define the RST pin for the RFID reader

MFRC522 rfid(SS_PIN, RST_PIN);  // Create an MFRC522 instance

void setup() {
 Serial.begin(9600);   // Initialize serial communication
 SPI.begin();          // Initialize SPI
 rfid.PCD_Init();      // Initialize RFID reader
 Serial.println("RFID Reader Initialized");
 Serial.println("Please approximate your card to the RFID reader...");
}

void loop() {
 // Check for new RFID cards
 if (rfid.PICC_IsNewCardPresent() && rfid.PICC_ReadCardSerial()) {
   // Get the card UID
   String cardUID = "";
   for (byte i = 0; i < rfid.uid.size; i++) {
     cardUID += String(rfid.uid.uidByte[i], HEX);
     if (i < rfid.uid.size - 1) {  // Add space between bytes except for the last byte
       cardUID += " ";
     }
   }

   Serial.print("Card ID: ");
   Serial.println(cardUID);
   rfid.PICC_HaltA();  // Halt the card
   rfid.PCD_StopCrypto1(); // Stop encryption on the card
 }
}