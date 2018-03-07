/*****************************************************************
**                                                              **
**                        Títol:                                **
**             Nom amb display 7 segments                       **
**                                                              **
** NOM:Martin Herranz Cruz                     Data:07/03/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
const int A=4;
const int B=5;
const int C=6;
const int D=7;
const int E=8;
const int F=9;
const int G=10;
signed long retard=1000;

//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
  
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
pinMode(E,OUTPUT);
pinMode(F,OUTPUT);
pinMode(G,OUTPUT);


}

//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa
digitalWrite(A,HIGH);
digitalWrite(E,HIGH);
digitalWrite(C,HIGH);
delay(retard);

digitalWrite(B,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(retard);

digitalWrite(A,LOW);
digitalWrite(F,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
delay(retard);

digitalWrite(F,HIGH);
digitalWrite(D,HIGH);
digitalWrite(A,LOW);
digitalWrite(C,LOW);
delay(retard);

digitalWrite(G,LOW);
digitalWrite(D,LOW);
delay(retard);

digitalWrite(F,LOW);
digitalWrite(G,HIGH);
digitalWrite(C,HIGH);
delay(retard);

digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(retard);

}

//****************************FUNCIONS****************************
