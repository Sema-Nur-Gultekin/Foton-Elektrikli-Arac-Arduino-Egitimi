int a = 10;
int b = 10;
int c = 13;

void setup() {
  Serial.begin(9600);

  // Karşılaştırma Operatörleri

  Serial.println(a < b);  // Karşılaştırma yapar doğruysa 1 yanlış ise 0 yazar
  Serial.println((a + b) > c);
  Serial.println(true);
  Serial.println(a >= b);
  Serial.println(a == b);
  Serial.println(a != b);

  // Mantık Operatörleri

  Serial.println((a < b) && (c > b));
  Serial.println((a >= c) || (a < b));
  Serial.println((a + b > c) || (c - 9 > -1 ) || (b - c < 0));
}

void loop() {
}
