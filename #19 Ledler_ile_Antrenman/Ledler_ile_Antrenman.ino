/* Uygulamalar
A - Tüm ledleri aynı anda yakıp söndürmek 
B - Ledleri sıra ile yakıp söndürmek ( önce 1 sonra 2,3,4,5 ve geriye doğru 5,4,3,2,1)
C - Ledleri sıra sıra 10'ar kere yakıp söndürmek ( önce 1.led 10 kere yanıp sönecek, sonra 2.led, sonra 3 ... sonra geriye doğru dön)
*/

/* A 
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(3, 1);
  digitalWrite(4, HIGH);
  digitalWrite(5, 1);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(3, 0);
  digitalWrite(4, LOW);
  digitalWrite(5, 0);
  digitalWrite(6, LOW);
  delay(1000);
} */

/* B
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  for (int i = 2; i <= 6; i++) {
    digitalWrite(i, HIGH);
    delay(500);
  }
  for (int i = 6; i >= 2; i--) {
    digitalWrite(i, LOW);
    delay(500);
  }
} */

// C
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  for (int i = 2; i <= 6; i++) {
    for (int j = 0; j <= 10; j++) {
      digitalWrite(i, HIGH);
      delay(100);
      digitalWrite(i, LOW);
      delay(100);
    }
  }
  for (int i = 5; i >= 2; i--) {
    for (int j = 0; j <= 10; j++) {
      digitalWrite(i, HIGH);
      delay(100);
      digitalWrite(i, LOW);
      delay(100);
    }
  }
} 
