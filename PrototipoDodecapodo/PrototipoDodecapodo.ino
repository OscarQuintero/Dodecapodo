//Version 1.0 del firmware para el Dodecapodo PACO
//------------------------------------------------
//Entradas del puente en H

//#include "sensores.h"

int PHIN1 = 22;//Corresponde al lado derecho adelante
int PHIN2 = 23;//Corresponde al lado izquierdo atras
int PHIN3 = 26;//Corresponde al lado izquierdo adelante
int PHIN4 = 25;//Corresponde al lado derecho atras
 

int MotoresDerechos = 2;
int MotoresIzquierdos = 3;

int ElevadorGarra = 30;
int PinzaGarra = 30;

//-----Declaracion de funciones
void detente()
{
  digitalWrite(PHIN1, LOW);
  digitalWrite(PHIN2, LOW);
  digitalWrite(PHIN3, LOW);
  digitalWrite(PHIN4, LOW);
}

void avanza(int velocidad)
{
  digitalWrite(PHIN1, LOW);
  digitalWrite(PHIN2, HIGH);
  digitalWrite(PHIN3, LOW);
  digitalWrite(PHIN4, HIGH);
  analogWrite(MotoresDerechos, velocidad);
  analogWrite(MotoresIzquierdos, velocidad);
  
}

void retrocede(int velocidad)
{
  digitalWrite(PHIN1, HIGH);
  digitalWrite(PHIN2, LOW);
  digitalWrite(PHIN3, HIGH);
  digitalWrite(PHIN4, LOW);
  analogWrite(MotoresDerechos, velocidad);
  analogWrite(MotoresIzquierdos, velocidad);
}

void giraDerecha(int velocidad)
{
  digitalWrite(PHIN1,LOW);
  digitalWrite(PHIN2,LOW);
  digitalWrite(PHIN3,HIGH);
  digitalWrite(PHIN4,HIGH);
  analogWrite(MotoresDerechos, velocidad);
  analogWrite(MotoresIzquierdos, velocidad);
}

void giraIzquierda(int velocidad)
{
  digitalWrite(PHIN1,HIGH);  //Corresponde al lado derecho adelante
  digitalWrite(PHIN2,HIGH);  //Corresponde al lado izquierdo atras
  digitalWrite(PHIN3,LOW); //Corresponde al lado izquierdo adelante
  digitalWrite(PHIN4,LOW);  //Corresponde al lado derecho atras
  analogWrite(MotoresDerechos, velocidad);
  analogWrite(MotoresIzquierdos, velocidad);
}
//---Control de la Garra mecanica---------------------------------------

void levantaGarra()
{
   
}
void bajaGarra()
{
  
}
void detenGarra()
{
  
}
void accionaGarra()
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

  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);

}

void loop() {
  

  avanza(255);
  delay(2000);
  detente();
  delay(2000);
  
  retrocede(255);
  delay(1000);
  detente();
  delay(1000);

  giraDerecha(100);
  delay(5000);

  digitalWrite(13, HIGH);
  
  giraIzquierda(100);
  delay(6000);
  detente();

  
  
  digitalWrite(13, LOW);
  delay(200);

  

}
