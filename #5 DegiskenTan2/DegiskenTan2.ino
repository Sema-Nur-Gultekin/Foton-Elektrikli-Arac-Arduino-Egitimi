/* Değişken adlandırma kuralları ( C++ ile aynı )
1. İlk başa sayı sayılamaz 
2. Kodlamada kullanılan kelimeler kullanılamaz Örn: setup, loop
3. Özel karakter içeremez Örn: ?
4. Büyük küçük harf duyarlı */

int led = 13;

void setup() {
  Serial.begin(9600);
  Serial.println(led);

}

void loop() {
 

}
