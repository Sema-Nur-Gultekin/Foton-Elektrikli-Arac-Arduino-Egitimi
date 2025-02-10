int i = 10;

void setup() {
  Serial.begin(9600);

  do {
    Serial.println("robo90.com Ankara");
    i++;
  } while (i < 10);

  while (i > 10) {
    Serial.println("robo90.com Ankara");
    i++;
  }
}

void loop() {
}
