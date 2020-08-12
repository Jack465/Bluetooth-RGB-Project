#include <SoftwareSerial.h>

#define REDPIN 5
#define GREENPIN 6
#define BLUEPIN 3

SoftwareSerial hc06(2,4);

void setup() {
  // Start the serial monitor
  Serial.begin(9600);
  Serial.print("started\n");

  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);

  // Start the Bluetooth Serial
  hc06.begin(9600);
}

void loop() {
  while(hc06.available() > 0) {
    String hexString = hc06.readString();
    Serial.print(hexString + '\n');
    long number = strtol( &hexString[1], NULL, 16);

    // Split them up into r, g, b values
    long r = number >> 16;
    long g = number >> 8 & 0xFF;
    long b = number & 0xFF;
	
    Serial.println(r);
    analogWrite(REDPIN, r);
	
    Serial.println(g);
    analogWrite(GREENPIN, g);
	
    Serial.println(b);
    analogWrite(BLUEPIN, b);
  }
}