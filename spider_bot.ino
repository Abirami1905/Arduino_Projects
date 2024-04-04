#include <Servo.h>

// Define the servo motor pin
const int servoPin = 9;

// Create a servo object
Servo servoMotor;

void setup() {
  // Attach the servo to the pin
  servoMotor.attach(servoPin);
}

void loop() {
  // Sweep the servo from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle += 1) {
    servoMotor.write(angle);
    delay(15); // Adjust delay for smoother motion
  }
  
  // Sweep the servo from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle -= 1) {
    servoMotor.write(angle);
    delay(15); // Adjust delay for smoother motion
  }
}
