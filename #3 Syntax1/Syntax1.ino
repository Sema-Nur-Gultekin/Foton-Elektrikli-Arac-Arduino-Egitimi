// Yorum satırı
/* Yorum satırı */
// Çoğu şey C++ ile benzer
// Ctrl+T Otamatik satırları düzenler

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);  // bu satır 13.pini açar
  delay(1000);             // bu satır 1 sn bekletir
  digitalWrite(13, LOW);
  delay(1000);

  digitalWrite(12, HIGH);  // bu satır 12.pini açar
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
}
