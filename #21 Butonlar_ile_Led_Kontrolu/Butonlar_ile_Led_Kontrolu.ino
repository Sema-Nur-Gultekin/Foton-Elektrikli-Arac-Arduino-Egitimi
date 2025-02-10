/* Uygulama
Butonların bir tanesine basılı iken ledlerin tamamı yansın, aksi halde sönsün.
Diğer butona basıp çekince ledlerin tamamı yansın, tekrar basıp çekince sönsün. */

#define LED_RED 2
#define LED_BLUE 3
#define LED_GREEN 4
#define LED_YELLOW 5

#define BUTTON1 8
#define BUTTON2 9

int state = 0;

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);

  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);

  Serial.begin(9600);
}

void loop() {
  /*
  if (digitalRead(BUTTON1) == 1) {
    digitalWrite(LED_RED, 1);
    digitalWrite(LED_BLUE, 1);
    digitalWrite(LED_GREEN, 1);
    digitalWrite(LED_YELLOW, 1);
  } else {
    digitalWrite(LED_RED, 0);
    digitalWrite(LED_BLUE, 0);
    digitalWrite(LED_GREEN, 0);
    digitalWrite(LED_YELLOW, 0);
  } */

  if (digitalRead(BUTTON2) == 1) {
    state = !(state);
    while (digitalRead(BUTTON2) == 1) {
      delay(100);
    }
    digitalWrite(LED_RED, state);
    digitalWrite(LED_BLUE, state);
    digitalWrite(LED_GREEN, state);
    digitalWrite(LED_YELLOW, state);
  }
}
