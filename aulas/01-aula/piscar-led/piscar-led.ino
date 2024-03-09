int pinLed = 4;
int duration = 100;

void setup() {
  pinMode(pinLed, OUTPUT);
}

void loop() {
  digitalWrite(pinLed, HIGH);
  delay(duration);
  digitalWrite(pinLed, LOW);
  delay(duration);
}
