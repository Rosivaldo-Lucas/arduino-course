int pinLed_4 = 4;
int pinLed_5 = 5;
int duration = 100;

void setup() {
  pinMode(pinLed_4, OUTPUT);
  pinMode(pinLed_5, OUTPUT);
}

void loop() {
  digitalWrite(pinLed_4, HIGH);
  delay(duration);
  digitalWrite(pinLed_4, LOW);
  delay(duration);

  digitalWrite(pinLed_5, HIGH);
  delay(duration);
  digitalWrite(pinLed_5, LOW);
  delay(duration);
}
