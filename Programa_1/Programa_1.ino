/*****************************************************************
**                                                              **
**                        Títol:                                **
**                 Cruïlla de semafors                          **
**                                                              **
** NOM:Martin Herranz Cruz                     Data:05/03/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
const int ledA=5;
const int ledB=6;
const int ledC=7;
const int ledD=8;
const int ledE=9;
const int ledF=10;
const int ledG=11;
const int leddoD=12;
const int leddotE=13;
signed long retard=1000;
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
    
    
    
}

//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa
    pinMode(ledA,OUTPUT);
    pinMode(ledB,OUTPUT);
    pinMode(ledC,OUTPUT);
    pinMode(ledD,OUTPUT);
    pinMode(ledF,OUTPUT);
    pinMode(ledG,OUTPUT);
    
    digitalWrite(led5,HIGH);
    digitalWrite(led10,HIGH);
      delay(retard);
    digitalWrite(led5,HIGH);
    digitalWrite(led10,LOW);
    digitalWrite(led12,HIGH);
      delay(4*retard);
    digitalWrite(led5,HIGH);
    digitalWrite(led12,LOW);
    digitalWrite(led11,HIGH);
      delay(retard);
    digitalWrite(led5,HIGH);
    digitalWrite(led10,HIGH);
    digitalWrite(led11,LOW);
      delay(retard);
    digitalWrite(led5,LOW);
    digitalWrite(led7,HIGH);
      delay(4*retard);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,LOW);
      delay(retard);
    digitalWrite(led6,LOW);
    digitalWrite(led5,HIGH);
      delay(retard);

