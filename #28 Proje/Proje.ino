#define LED_R 3
#define LED_G 4
#define LED_B 5

#define BUZZER 6

#define SWITCH 2

#include <NewPing.h>

#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {

  Serial.begin(9600);

  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);

  pinMode(BUZZER, OUTPUT);

  pinMode(SWITCH, INPUT);

  digitalWrite(LED_R, 1);
  digitalWrite(LED_G, 1);
  digitalWrite(LED_B, 1);
}

void loop() {

  int distance = sonar.ping_cm();

  Serial.print("Ping: ");
  Serial.print(distance);
  Serial.println("cm");

  if (distance > 30) {  // 30cm'den büyükse yeşil yanar
    digitalWrite(LED_G, 0);
    digitalWrite(LED_R, 1);
    digitalWrite(BUZZER, 0);
  } else if (distance > 10 && distance <= 30) {  // 10cm ve 30cm arasında ise sarı yanar
    digitalWrite(LED_R, 0);
    digitalWrite(LED_G, 0);
    digitalWrite(BUZZER, 0);
  } else if (distance <= 10) {  // 10cm'den küçükse kırmızı yanar
    if (digitalRead(SWITCH) == 1) {
      digitalWrite(BUZZER, 1);  // Buzzer açılır
    } else {
      digitalWrite(BUZZER, 0);  // Buzzer kapanır
    }
    digitalWrite(LED_R, 0);
    digitalWrite(LED_G, 1);
  }
}
