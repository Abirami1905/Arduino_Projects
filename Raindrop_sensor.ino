// Define the pin the raindrop sensor is connected to
const int raindropPin = A0; // Analog pin A0

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
}

void loop() {
  // Read the analog value from the raindrop sensor
  int sensorValue = analogRead(raindropPin);
  
  // Convert the analog value to a voltage value (0 to 5 volts)
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // Print the voltage value to the serial monitor
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");
  
  // Delay for a short time to stabilize readings
  delay(1000); // Delay for 1 second
}
