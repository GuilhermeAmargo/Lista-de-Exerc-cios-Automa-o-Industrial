const int botao = 6; //""Sensor"
const int led = 4;
int numero = 0;
bool estadosensor = 0;

void setup() {
  pinMode(botao, INPUT);//"Sensor"
  pinMode(led, OUTPUT);
}

void loop () {
    estadosensor = digitalRead (botao);

    if(estadosensor == 1){
        digitalWrite(led, HIGH);
    } else {
        delay(1000);
        digitalWrite(led, LOW);
    }
}
