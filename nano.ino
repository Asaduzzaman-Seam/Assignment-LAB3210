#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);
void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  mySerial.println("Nano");
}

void loop() {
  if (Serial.available() > 0) {
    mySerial.println(Serial.readString());
  }
}
