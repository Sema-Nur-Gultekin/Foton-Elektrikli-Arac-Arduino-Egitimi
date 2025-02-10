int ay = 15;

void setup() {
  Serial.begin(9600);
  /*
  switch (ay) {
    case 1:
      Serial.println("31");
      break;

    case 2:
      Serial.println("28 ya da 29");
      break;

    case 3:
      Serial.println("31");
      break;

    case 4:
      Serial.println("30");
      break;

    case 5:
      Serial.println("31");
      break;

    case 6:
      Serial.println("30");
      break;

    case 7:
      Serial.println("31");
      break;

    case 8:
      Serial.println("31");
      break;

    case 9:
      Serial.println("30");
      break;

    case 10:
      Serial.println("31");
      break;

    case 11:
      Serial.println("30");
      break;

    case 12:
      Serial.println("31");
      break;

    default:
      Serial.println("aylar sadece 1 ve 12 arasında olabilir");
      break;
  } */

  switch (ay) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      Serial.println("31");
      break;

    case 4:
    case 6:
    case 9:
    case 11:
      Serial.println("30");
      break;

    case 2:
      Serial.println("28 ya da 29");
      break;

    default:
      Serial.println("aylar sadece 1 ve 12 arasında olabilir");
      break;
  }
}

void loop() {
}
