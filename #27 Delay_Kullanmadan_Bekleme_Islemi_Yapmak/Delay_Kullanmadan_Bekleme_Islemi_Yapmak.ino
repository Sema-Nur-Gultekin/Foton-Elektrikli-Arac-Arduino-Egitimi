#define BUTTON 3
#define LED 2

bool state;
bool ledDurum = LOW;

int beklemeSuresi = 5000;

unsigned long simdikiZaman = 0;
unsigned long eskiZaman = 0;

void setup() {

  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  state = digitalRead(BUTTON);
  if (state == 0) {
    Serial.println("Butona basıldı.");
    while (digitalRead(BUTTON) == 0)
      ;
  }

  simdikiZaman = millis();
  if (simdikiZaman - eskiZaman > beklemeSuresi) {
    eskiZaman = simdikiZaman;
    if (ledDurum == LOW)
      ledDurum = HIGH;
    else
      ledDurum = LOW;

    digitalWrite(LED, ledDurum);
  }
}
