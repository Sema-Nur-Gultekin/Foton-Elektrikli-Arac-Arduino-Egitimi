int Not = 85;

void setup() {
  Serial.begin(9600);

  if (Not >= 60) {
    Serial.println("Geçtiniz");
  } 
  else if (Not > 40) {
    Serial.println("Sınava tekrar girebilirsiniz");
  } 
  else {
    Serial.println("Kaldınız");
  }

}

void loop() {
}
