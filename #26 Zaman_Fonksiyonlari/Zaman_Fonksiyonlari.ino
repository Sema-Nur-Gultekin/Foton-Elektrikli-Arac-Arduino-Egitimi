int a = 0;

unsigned long zaman = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  // delayMicroseconds(10000); // delay(10); aynı şeydir

  zaman = millis();  // Arduino çalışmaya başladığı zamandan belli geçen süreyi milisaniye cinsinden tutar
  Serial.print(" zaman = ");
  Serial.println(zaman);

  zaman = micros();  // Arduino çalışmaya başladığı zamandan belli geçen süreyi mikrosaniye cinsinden tutar
  Serial.print(" zaman = ");
  Serial.println(zaman);

  delay(1000);
}
