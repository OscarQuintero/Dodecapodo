//Version 1.0 del firmware para el Dodecapodo PACO
//------------------------------------------------
//Entradas del puente en H
int PHIN1 = 22;
int PHIN2 = 23;
int PHIN3 = 26;
int PHIN4 = 25;

int MotoresDerechos = 2;
int MotoresIzquierdos = 3;

//-----Declaracion de funciones
void detente()
{
  
}

void avanza(int velocidad)
{
  digitalWrite(PHIN1, HIGH);
  digitalWrite(PHIN2, LOW);
  digitalWrite(PHIN3, LOW);
  digitalWrite(PHIN4, HIGH);
  analogWrite(MotoresDerechos, velocidad);
  analogWrite(MotoresIzquierdos, velocidad);
  
}

void retrocede(int velocidad)
{
  
}

void giraDerecha(int velocidad)
{
  
}

void giraIzquierda(int velocidad)
{
  
}



//------------------------------------------------
void setup() {
  pinMode(PHIN1, OUTPUT);
  pinMode(PHIN2, OUTPUT);
  pinMode(PHIN3, OUTPUT);
  pinMode(PHIN4, OUTPUT);
  pinMode(MotoresDerechos, OUTPUT);
  pinMode(MotoresIzquierdos, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);

  avanza(255);
  delay(1000);
  detente();

  digitalWrite(13, LOW);
  delay(200);

  

}
