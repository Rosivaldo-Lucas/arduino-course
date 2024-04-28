#include <Servo.h>

Servo myservo;

String inputString = "";
boolean stringComplete = false;

int ch1 = 12;   // LED VERMELHO
int ch2 = 11;   // LED VERDE
int ch3 = 10;   // LED VERDE 2
int ch4 = 8;    // BUZZE

int array[] = {ch1, ch2, ch3, ch4};

void setup() {
  myservo.attach(3);

  for (int i = 0; i < 4; i++) {
    pinMode(array[i], OUTPUT);
  }

  Serial.begin(9600);
    while (!Serial) {
      ;
    }

  inputString.reserve(200);
}

void switchPin(int pin) {
  delay(200);

  if (digitalRead(pin)) {
    digitalWrite(pin, LOW);
  } else {
    digitalWrite(pin, HIGH);
  }
}

void loop() {
  if (stringComplete) {
    inputString.trim();
    Serial.println(inputString);

    if (inputString.equalsIgnoreCase("LED VERMELHO")) {
      switchPin(ch1);
    };

    if (inputString.equalsIgnoreCase("LED VERDE")) {
      switchPin(ch2);
    };

    if (inputString.equalsIgnoreCase("LED VERDE 2")) {
      switchPin(ch3);
    }

    if (inputString.equalsIgnoreCase("BUZZER")) {
      tone(ch4, 500);
      delay(1000);
      noTone(ch4);
    }

    if (inputString.equalsIgnoreCase("SERVO MOTOR")) {
      Serial.println("AQUIII");

      myservo.write(180);
      delay(500);
      myservo.write(0);
      delay(500);
      myservo.write(90);
      delay(500);
    };

    if (inputString.equalsIgnoreCase("todos")) {
      for (int i = 0; i < 4; i++) {
        switchPin(array[i]);
      }
    };

    inputString = "";
    stringComplete = false;
  }

  delay(200);
}

void serialEvent() {
  while (Serial.available()) {
    char inChar = (char) Serial.read();

    inputString += inChar;

    if (inChar == '\n') {
      stringComplete = true;
    }
  }
}
