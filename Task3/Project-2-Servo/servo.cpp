#include <Servo.h>

Servo myServo;

int angle = 0;        // Current angle
int maxAngle = 180;    // Change this to your desired X angle
int delayTime = 12;   // Delay between steps (ms)
int errorInAngle = 0;

void setup() {
  myServo.attach(9);  // Connect servo signal wire to pin 9
}

void loop() {
  // Move from 0 to X degrees
  for (angle = 0; angle <= maxAngle + errorInAngle; angle++) {
    myServo.write(angle);
    delay(delayTime);
  }

  delay(500);  // Pause at the top

  // Move back from X to 0 degrees
  for (angle = maxAngle; angle >= 0 - errorInAngle; angle--) {
    myServo.write(angle);
    delay(delayTime);
  }

  delay(1000);  // Pause before repeating
}

// Link to design: https://www.tinkercad.com/things/7D5nHQ1yI68-t3q2?sharecode=ec5ZHWg3Vktm5e-n9aCmzDKo549t_6B4DgmGckfKIq8