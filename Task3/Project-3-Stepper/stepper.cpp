#include <Stepper.h>

#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11

const int stepsPerRevolution = 2048; 
const int rotations = 3;              // number of full rotations
const int direction = 1;              // 1 = forward, -1 = reverse
const int animationSpeed = 2000;      // ms
const int stepperSpeed = 15;          // rpm

Stepper myStepper(stepsPerRevolution, IN1, IN3, IN2, IN4);

void setup() {
  myStepper.setSpeed(stepperSpeed);  // Speed in RPM
}

void loop() {  
  myStepper.step(direction * rotations * stepsPerRevolution);
  delay(animationSpeed);  // wait before next run

  /*
  // to reverse the motor
  myStepper.step(-1 * direction * rotations * stepsPerRevolution);
  delay(animationSpeed);
  */
}

// Link to design: https://wokwi.com/projects/435591141145615361
