#include <Servo.h>

#define SERVO_PIN 2   // Define servo signal pin

Servo myServo;        // Create a servo object

void setup() {
  myServo.attach(SERVO_PIN);  // Attach servo to pin 2
}

void loop() {
  // Move servo forward from 0° to 180°
  for (int pos = 0; pos <= 180; pos += 1) { //change degree value to go faster or slower
    myServo.write(pos);
    delay(2);  // Allow time for servo to move,change delay as per requirement
  }

  delay(200);  // Short pause at the end position

  // Move servo backward from 180° to 0°
  for (int pos = 180; pos >= 0; pos -= 1) { //change degree value to go faster or slower
    myServo.write(pos);
    delay(2);
  }

  delay(200);  // Short pause at the start position
}
