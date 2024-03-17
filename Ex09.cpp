int led = 3;
int bot1 = 4;
int bot2 = 6;
bool estadobotao1 = 0;
bool estadobotao2 = 0;

void setup () {
    pinMode(led, OUTPUT);
    pinMode(bot1, INPUT);
    pinMode(bot2, INPUT);
}

void loop () {
    estadobotao1 = digitalRead (bot1);
    estadobotao2 = digitalRead (bot2);

    if(estadobotao1 == HIGH && estadobotao2 == LOW){
        digitalWrite(led, HIGH);
    } else if(estadobotao2 == HIGH && estadobotao1 == LOW){
        digitalWrite(led, LOW);
    } 
  if(estadobotao1 == HIGH && estadobotao2 == HIGH) {
        while(estadobotao1 == HIGH && estadobotao2 == HIGH){
        digitalWrite(led, LOW);
        delay(500);
        digitalWrite(led, HIGH);
        delay(500);
        estadobotao1 = digitalRead(bot1);
        estadobotao2 = digitalRead(bot2);
        }
}
    }