#define BLUELED 3
#define YELLOWLED 5

void setup() {
  pinMode(BLUELED, OUTPUT);
  pinMode(YELLOWLED, OUTPUT);
}

void loop() {
  // analogWrite(BLUELED, 32);  // 0-255 arasında değer verilebilir. 0 verirsek 0 volt değer veririz. 255 verirsek 5 volt olmuş olur.

  for (int i = 0; i < 256; i++) {
    analogWrite(BLUELED, i);
    delay(10);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(BLUELED, i);
    delay(10);
  }
}
