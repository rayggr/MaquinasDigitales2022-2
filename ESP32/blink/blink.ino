const int digitalWritePin = 32;
void setup() {
  // put your setup code here, to run once:
  pinMode(digitalWritePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(digitalWritePin,HIGH);
  delay(500);
  digitalWrite(digitalWritePin,LOW);
  delay(500);
}
