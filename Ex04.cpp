int verde = 5;
int amarelo = 4;
int vermelho = 3;
float time = 5;
void setup() {
  for (int i = 3; i <= 5; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
 
    for (int led = 3; led <= 5; led++) {
      digitalWrite(led, HIGH);
      delay(time);
      digitalWrite(led, LOW);
      delay(time);
    }
    time += time * 0.15;
    if (time > 5000) {
      time = 5;
    }
  }