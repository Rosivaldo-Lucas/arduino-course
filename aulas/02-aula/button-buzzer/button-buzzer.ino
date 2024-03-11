int pinButton = 2;
int pinBuzzer = 8;
int pinLed = 9;

void playNotes(int duration) {
  int notes[] = {262, 294, 330, 349, 392, 440, 494, 523};
  
  for (int i = 0; i < 8; i++) {
  	tone(pinBuzzer, notes[i], duration);
  	delay(duration + 20);
  	noTone(pinBuzzer);
  }
}

void playMelody() {
  int melody[] = {262, 262, 294, 262, 349, 330, 262, 262, 294, 262, 392, 349, 262, 262, 523, 440, 349, 330, 294, 466, 466, 440, 349, 392, 349};
  
  int duration = 600;
  
  for (int i = 0; i < 25; i++) {
    tone(pinBuzzer, melody[i], duration);
    
    // LED control
    digitalWrite(pinLed, HIGH);
    delay(duration / 2);
    digitalWrite(pinLed, LOW);
    delay(duration / 2);
    
    noTone(pinBuzzer);
    delay(20);
  }
}

void setup() {
  pinMode(pinButton, INPUT);
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(pinButton);

  int duration = 500;

  if (buttonState == HIGH) {
    // playNotes(duration);
    playMelody();
  }

  delay(200);
}
