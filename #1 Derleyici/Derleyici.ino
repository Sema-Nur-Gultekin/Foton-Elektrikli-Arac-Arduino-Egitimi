void setup() { // Başta sadece 1 kere çalışır 
 pinMode(LED_BUILTIN, OUTPUT); // LED_BUILTIN YERİNE 13 DE KULLANILABİLİR 

}

void loop() { // Sonsuz döngüye girer 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  
}
