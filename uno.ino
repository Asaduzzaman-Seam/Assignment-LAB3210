#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);
void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  Serial.println("UNO");
}

void loop() {
  if (Serial.available() > 0) {
    String msg = Serial.readString();
    Serial.println(msg);
    mySerial.println(msg);
  }
}
