void setup() {
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(4,OUTPUT);


}

void loop() {
  digitalWrite(12,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(4,HIGH);
  delay(2000);

  digitalWrite(12,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(4,LOW);
  delay(2000);
  

}
