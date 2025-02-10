// #define kullanırken atama operatörü ve noktalı virgül kullanmayız
// Define bellekte yer kaplamaz
// Const tanımlanan ifadeyi programda bir daha değiştiremeyiz

int state;
int button = 8;

const int ledRed = 2;
#define LEDBLUE 3
int ledGreen = 4;
int ledYellow = 5;

void setup() {
  pinMode(button, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(LEDBLUE, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);

  //  Serial.begin(9600);
}

void loop() {

  state = digitalRead(button);
  // Serial.println(state);  //Serial.println(digitalRead(8)); De kullanabiliriz.

  if (state == 1) {
    digitalWrite(ledRed, HIGH);
    digitalWrite(LEDBLUE, HIGH);
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledYellow, HIGH);
  } else {
    digitalWrite(ledRed, LOW);
    digitalWrite(LEDBLUE, LOW);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledYellow, LOW);
  }
}
