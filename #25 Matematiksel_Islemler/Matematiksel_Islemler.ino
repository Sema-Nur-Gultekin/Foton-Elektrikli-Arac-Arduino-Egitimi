int a = 5;
int b = 2;

#define POT A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(sq(a));      // Karesini alır
  Serial.println(sqrt(a));    // Karekökünü alır
  Serial.println(pow(a, b));  // a üssü b
  Serial.println(min(a, b));  // a ve b ye bakar en küçük hangisi ise onu döndürür
  Serial.println(max(a, b));  // a ve b ye bakar en büyük hangisi ise onu döndürür
  Serial.println(abs(a));     // Mutlak değer alır

  a = constrain(a, 10, 150);  // Değeri sadece verilen aralıklarda kıyaslar
  Serial.println(a);

  int potValue = analogRead(POT);
  Serial.print("eski değer =");
  Serial.print(potValue);

  int newPotValue = map(potValue, 0, 1023, 0, 180);  // Değeri istenilen aralığa göre dönüştürür

  Serial.print("   yeni değer =");
  Serial.println(newPotValue);
}
