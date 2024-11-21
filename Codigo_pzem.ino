#include <SoftwareSerial.h>

// Pines para la comunicación serial
const int RX_PIN = 10;
const int TX_PIN = 11;

SoftwareSerial mySerial(RX_PIN, TX_PIN);

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  if (mySerial.available()) {
    String data = mySerial.readStringUntil('\n');
    Serial.println(data);
  }
}