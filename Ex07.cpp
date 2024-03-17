int botao = 6;
int led = 4;
int numero = 0;

void setup() {
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(botao) == HIGH) {
    numero++;
    for (int i = 0; i < numero; i++) {
      digitalWrite(led, HIGH);
      delay(500);
      digitalWrite(led, LOW);
      delay(500);
    }
  }
}