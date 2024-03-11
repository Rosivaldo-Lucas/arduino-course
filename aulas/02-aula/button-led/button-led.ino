int pinButton = 2;
int pinLed = 8;
int buttonState = 0;
int ledState = LOW;

void setup() {
  pinMode(pinButton, INPUT);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  buttonState = digitalRead(pinButton);

  if (buttonState == HIGH) {
    ledState = !ledState;
    
    digitalWrite(pinLed, ledState);
    delay(200);
  }
}
