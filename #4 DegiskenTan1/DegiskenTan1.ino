int led = 13;

void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);

  led = 6;
}