#define LED 3
#define LDR A0

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  Serial.println(analogRead(LDR));

  if (analogRead(LDR) < 350) {
    digitalWrite(LED, 1);
  }

  else {
    digitalWrite(LED, 0);
  }
}
