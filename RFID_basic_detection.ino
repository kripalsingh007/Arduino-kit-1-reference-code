/*
  RFID Detection Example
  Prints "RFID detected" when a compatible
  13.56 MHz RFID card/tag is detected.

  Module: RC522 RFID Reader
*/

#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);

void setup() 
{
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();

  Serial.println("Scan RFID card/tag...");
}

void loop() 
{
  if (rfid.PICC_IsNewCardPresent())  // Checks if a new RFID card is present
  {
    // Read the card
    if (rfid.PICC_ReadCardSerial()) 
    {
      Serial.println("RFID detected");
      // Stop reading current card
      rfid.PICC_HaltA();
    }
  }
}
