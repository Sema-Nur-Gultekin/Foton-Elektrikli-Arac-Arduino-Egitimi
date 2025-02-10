/* Uygulama
Potansiyometreden gelen değerlere göre ledin parlaklığını kontrol eden bir uygulama geliştirin. */

#define LED 3
#define POT A0

int potValue = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);  // Zaten ınput olarak çalışıyor tekrar dememize gerek yok ama dersekte bir şey olmaz.

  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(POT);
  Serial.print(" potValue = ");
  Serial.print(potValue);
  potValue = map(potValue, 0, 1023, 0, 255);  // potValue = potValue / 4;'de kullanabiliriz map(değerimiz, hangi aralıklardaysa onu yazıyoruz, hangi aralıkta olmasını istiyorsak onu yazıyoruz )
  Serial.print(" New potValue = ");
  Serial.println(potValue);

  analogWrite(LED, potValue);
}
