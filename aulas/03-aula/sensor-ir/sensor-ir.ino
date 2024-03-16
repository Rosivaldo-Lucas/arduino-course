#define PinLed 9 //Entrada digital do Arduino conectado ao LED
#define PinSensor 8 // Entrada digital do Arduino conectado ao pino OUT do Sensor 
int LeituraSensor; //Váriavel que irá armazenar os valores de leitura do sensor

void setup() {
  Serial.begin(9600); //Inicializa a comunicação serial
  pinMode(PinSensor, INPUT); // Declara o pino do sensor como entrada (INPUT)
  pinMode(PinLed, OUTPUT); // Declara o pino do led como saída (OUT)
}

void loop() {
  LeituraSensor = digitalRead(PinSensor); //Leitura de dados do sensor
  Serial.print("Leitura do sensor: ");
  Serial.println(LeituraSensor);
  
  if (LeituraSensor == LOW) { //Se a leitura do sensor for igual a LOW..
    digitalWrite(PinLed, HIGH); // Acende o LED
  } else { // Se o valor de leitura do sensor NÃO for igual a LOW
    digitalWrite(PinLed, LOW); // Apaga o LED
  }
}
