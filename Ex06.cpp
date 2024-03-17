int verde = 5;
int amarelo = 4;
int vermelho = 3;
int botao = 2;
int acionamento = 0;
bool estadobotao = false;
bool ultimoestado = false;

void setup () {
    for(int i = 3; i <= 5; i++){
        pinMode(i, OUTPUT);
}
}
void loop () {
    estadobotao = digitalRead (botao);
     if (estadobotao != ultimoestado && estadobotao == HIGH) {
    acionamento++;
    if (acionamento > 3) {
      acionamento = 0;
    }

    switch (acionamento) {
      case 1:
        digitalWrite(verde, HIGH);
        digitalWrite(amarelo, LOW);
        digitalWrite(vermelho, LOW);
        break;
      case 2:
        digitalWrite(verde, LOW);
        digitalWrite(amarelo, HIGH);
        digitalWrite(vermelho, LOW);
        break;
      case 3:
        digitalWrite(verde, LOW);
        digitalWrite(amarelo, LOW);
        digitalWrite(vermelho, HIGH);
        break;
      default:
      	digitalWrite(verde, LOW);
        digitalWrite(amarelo, LOW);
        digitalWrite(vermelho, LOW);
        break;
    }
  }
  ultimoestado = estadobotao;
}