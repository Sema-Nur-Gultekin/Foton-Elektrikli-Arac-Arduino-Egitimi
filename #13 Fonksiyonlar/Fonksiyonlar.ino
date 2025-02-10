int a = 5;
int b = 7;
int sonuc = 0;
int sonuc2 = 0;

void setup() {
  Serial.begin(9600);

  sonuc = hesapla(a, b);
  ekranaYaz(sonuc);
  sifirla();
  Serial.println(a);
  Serial.println(b);
  Serial.println(sonuc);
  sonuc2 = hepsiniTopla();
  Serial.print("sonuc2 = ");
  Serial.println(sonuc2);
}

void loop() {
}

int hesapla(int x, int y) {
  return (x + y) / 2 + 5;
}

void ekranaYaz(int z) {
  Serial.println(sonuc);
}

void sifirla() {
  a = 0;
  b = 0;
  sonuc = 0;
}

int hepsiniTopla() {
  return a + b;
}