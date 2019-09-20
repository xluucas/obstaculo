//Programa: Conectando Sensor Ultrassonico HC-SR04 ao Arduino

//Carrega a biblioteca do sensor ultrassonico
#include "Ultrasonic.h"
#include "obstaculo.h"

//int getMediaMovel(int dist);

//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(13, 12);

long distancia;


void setup()
{
  Serial.begin(9600);
  Serial.println("Lendo sensor...");
 // inicializa o pino digital 13 como Saída.
 //pinMode(13, OUTPUT);
}
 
void loop()
{
  //Le as informacoes do sensor, em cm 
  distancia = ultrasonic.Ranging(CM);// ultrassom.Ranging(CM) retorna a distancia em cm
  //Exibe informacoes no serial monitor
//  (distancia);
  Serial.println( getMediaMovel(distancia));
 //Serial.print("Centimetros");
  /*if(distancia>50){
    digitalWrite(13, HIGH); // ligar o LED em nível de tensão alto (HIGH)
  }
  if(distancia<20){
    digitalWrite(13, LOW); // ligar o LED em nível de tensão baixo (LOW)
  }
  if(distancia>20){
    
  }*/
  
  delay(10);
}
