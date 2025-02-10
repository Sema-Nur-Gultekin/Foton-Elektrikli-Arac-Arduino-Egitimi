int i = 0;

void setup() {
  Serial.begin(9600);

  // Break
  while (i < 10) {
    i++;
    Serial.println("robo90.com aa");

    if (i == 4) {
      break;  // Döngüden çıkarır
    }
  }

  // Continue
  while (i < 10) {
    Serial.print(i);
    Serial.println(". tur başladı.");
    i++;
    if (i == 7) {
      continue;  // Aşağı kısma bakmadan döngünün başına gider
    }
    Serial.println("robo90.com Ankara");
    Serial.println("robo90.com Ankara");
    Serial.println("robo90.com Ankara");
  }

}

void loop() {
}
