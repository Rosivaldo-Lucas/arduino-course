int led_4 = 4;
int led = 5;
int de = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(led_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(de);
  digitalWrite(led, LOW);
  delay(de);

  digitalWrite(led_4, HIGH);
  delay(de);
  digitalWrite(led_4, LOW);
  delay(de);
}
