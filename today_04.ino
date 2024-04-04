// Define pins for ultrasonic sensor
const int trigPin = 9;
const int echoPin = 10;

// Define pin for LED
const int ledPin = 13;

// Define variables for storing distance and duration
long duration;
int distance;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Define pin modes
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Clear the trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Set the trigger pin high for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read the duration of the pulse from echo pin
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance in centimeters
  distance = duration * 0.034 / 2;
  
  // Print the distance to serial monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  
  // Turn on LED if distance is less than 20 cm, otherwise turn off
  if (distance < 20) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
  // Delay before next reading
  delay(100);
}
