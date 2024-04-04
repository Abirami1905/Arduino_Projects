#define TRIG_PIN 2
#define ECHO_PIN 3
#define LOW_LED 4
#define MED_LED 5
#define HIGH_LED 6


void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Define pin modes
  pinMode(TRIG_PIN,OUTPUT);
  pinMode(ECHO_PIN,INPUT);
  pinMode(LOW_LED,OUTPUT);
  pinMode(MED_LED,OUTPUT);
  pinMode(HIGH_LED,OUTPUT);

}

void loop() {
  long duration ,distance;

  digitalWrite(TRIG_PIN,LOW);
  delayMicroseconds(2);
  
  
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Read the echo pin, and calculate distance
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2;
  
  // Print distance to Serial Monitor
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.println(" cm");

  digitalWrite(LOW_LED,LOW);
  digitalWrite(MED_LED,LOW);
  digitalWrite(HIGH_LED,LOW);

  if(distance<20){
    digitalWrite(LOW_LED,HIGH);

  }

  else if(distance>=20&& distance<50){
     digitalWrite(MED_LED,HIGH);


  }

  else{
     digitalWrite(HIGH_LED,HIGH);

  }
  
  // Wait before taking the next reading
  delay(1000);
}
