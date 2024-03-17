int g = 9;
int f = 8;
int e = 7;
int d = 6;
int c = 5;
int b = 4;
int a = 3;
int segs []  = {3,4,5,6,7,8,9};
int botao = 2;
bool ultimoEstadoBotao = 0;
int numeroAtual = 0;

void setup (){
    for(int i = 0; i < sizeof(segs)/ sizeof(segs[0]); i++){
        pinMode(segs[i], OUTPUT);
}
pinMode(botao, INPUT);
}

void loop () {
    bool EstadoBotao = digitalRead(botao);

      if (EstadoBotao == HIGH) {
        for (int i = 0; i <1; i++){
            for (int zero = segs[0]; zero<9; zero++)
    {
    digitalWrite(zero, HIGH);
        }
        delay(1000);
          for(int erasezero = segs[0]; erasezero<=segs[6]; erasezero++){
        digitalWrite(erasezero, LOW);
      }
      delay(1000);
      for(int one = segs[1]; one<segs[3]; one++){
        digitalWrite(one, HIGH);
      }
      delay(1000);
      for(int eraseone = segs[1]; eraseone<=segs[6]; eraseone++){
        digitalWrite(eraseone, LOW);
      }
      delay(1000);
      	digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d,HIGH);
        delay(1000);
      for(int erasetwo = segs[0]; erasetwo<=segs[6]; erasetwo++){
        digitalWrite(erasetwo, LOW);
        }
        delay(1000);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(g, HIGH);
      delay(1000);
      for(int erasethree = segs[0]; erasethree<=segs[6]; erasethree++){
        digitalWrite(erasethree, LOW);
        }
        delay(1000);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
         delay(1000);
      for(int erasefour = segs[0]; erasefour<=segs[6]; erasefour++){
        digitalWrite(erasefour, LOW);
        }
        delay(1000);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        delay(1000);
        for(int erasefive = segs[0]; erasefive<=segs[6]; erasefive++){
        digitalWrite(erasefive, LOW);
        }
        delay(1000);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(e, HIGH);
        delay(1000);
        for(int erasesix = segs[0]; erasesix<=segs[6]; erasesix++){
        digitalWrite(erasesix, LOW);
        }
        delay(1000);
      for(int seven = segs[0]; seven<segs[3]; seven++){
        digitalWrite(seven, HIGH);
      }
      delay(1000);
      for(int eraseseven = segs[0]; eraseseven<=segs[6]; eraseseven++){
        digitalWrite(eraseseven, LOW);
        }
      delay(1000);
      for(int eight = segs[0]; eight <=segs[6]; eight++){
        digitalWrite(eight, HIGH);
      }
      delay(1000);
       for(int eraseeight = segs[0]; eraseeight <=segs[6]; eraseeight++){
        digitalWrite(eraseeight, LOW);
        }
      delay(1000);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(1000);
      for(int erasenine = segs[0]; erasenine<=segs[6]; erasenine++){
        digitalWrite(erasenine, LOW);
        }
        delay(1000);
        for(int eight = segs[0]; eight <=segs[6]; eight++){
        digitalWrite(eight, HIGH);
      }
      delay(1000);
       for(int eraseeight = segs[0]; eraseeight <=segs[6]; eraseeight++){
        digitalWrite(eraseeight, LOW);
        }
    delay(1000);
    for(int seven = segs[0]; seven<segs[3]; seven++){
        digitalWrite(seven, HIGH);
      }
      delay(1000);
      for(int eraseseven = segs[0]; eraseseven<=segs[6]; eraseseven++){
        digitalWrite(eraseseven, LOW);
        }
    delay(1000);
    digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(e, HIGH);
        delay(1000);
        for(int erasesix = segs[0]; erasesix<=segs[6]; erasesix++){
        digitalWrite(erasesix, LOW);
        }
    delay(1000);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        delay(1000);
        for(int erasefive = segs[0]; erasefive<=segs[6]; erasefive++){
        digitalWrite(erasefive, LOW);
        }
        delay(1000);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
         delay(1000);
      for(int erasefour = segs[0]; erasefour<=segs[6]; erasefour++){
        digitalWrite(erasefour, LOW);
        }
    delay(1000);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(g, HIGH);
      delay(1000);
      for(int erasethree = segs[0]; erasethree<=segs[6]; erasethree++){
        digitalWrite(erasethree, LOW);
        }
    delay(1000);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d,HIGH);
        delay(1000);
      for(int erasetwo = segs[0]; erasetwo<=segs[6]; erasetwo++){
        digitalWrite(erasetwo, LOW);
        }
    delay(1000);
    for(int one = segs[1]; one<segs[3]; one++){
        digitalWrite(one, HIGH);
      }
      delay(1000);
    for(int eraseone = segs[1]; eraseone<=segs[6]; eraseone++){
        digitalWrite(eraseone, LOW);
      }
    delay(1000);
     for (int zero = segs[0]; zero<9; zero++)
    {
    digitalWrite(zero, HIGH);
        }
        delay(1000);
          for(int erasezero = segs[0]; erasezero<=segs[6]; erasezero++){
        digitalWrite(erasezero, LOW);
      }
        }
            }
                }