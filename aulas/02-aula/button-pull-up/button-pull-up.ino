int pinButton = 2;
int pinLed = 8;
int ledState = LOW;

void setup() {
  pinMode(pinButton, INPUT_PULLUP);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  if (digitalRead(pinButton) == LOW) {
    ledState = !ledState; // troca o estado do led; se LOW, led vai pra HIGH; se HIGH, led vai pra LOW

    digitalWrite(pinLed, ledState); // liga ou desliga o led
    
    while(digitalRead(pinButton) == LOW); // fica aqui enquanto o botão estiver pressionado
    
    delay(100); // evita uma leitura muito rápida do estado do botão
  }
}
