float a = 5;
int b = 7;
float c;
int d;
int sonuc;

void setup() {
  Serial.begin(9600);
/*
  // a' yı ekrana yazdırma
  Serial.print("a = ");
  Serial.println(a);

  // Toplama
  a = a + b;

  Serial.print("a = ");
  Serial.println(a);

  a = a + b;

  Serial.print("a = ");
  Serial.println(a);

  // Çıkarma
  a = a - 15;

  Serial.print("a = ");
  Serial.println(a);

  // Çarpma
  a = a * 4;

  Serial.print("a = ");
  Serial.println(a);

  // Bölme
  c = a / b;

  Serial.print("c = ");
  Serial.println(c);

  // Mod Alma
  d = 15 % b;

  Serial.print("d = ");
  Serial.println(d);

  // Parantez İşlemleri
  sonuc = 2 * 3 / (1 + 2) * 1;
  Serial.print(sonuc); 
*/

a = 0;

}

void loop() {
  a = a + 1; // Kısayolu a++;
  Serial.println(a);

}

/* Kısayolları
a++ - a=a+1;
a-- - a=a-1;
a+=2 - a=a+2;
a-=3 - a=a-3;
a*=4 - a=a*4;
a%=2 - a=a%2;
a/=2 - a=a/2;
*/