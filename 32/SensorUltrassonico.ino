/* 32 -- Sensor ultrassonico
 
 Acesse https://linktr.ee/progui
 
 Conteúdo para o material de estudos do 
 Introdução ao Arduino com 14 Projetos 
 Versao 1.0
 */

#include <Ultrasonic.h> //biblioteca ultrassonico

// inicializa pino 3 (trigger) e 2 (echo) para o sensor ultrassonico
Ultrasonic ultrasonic(3, 2);
const int led1 = 5; // pino LED1
const int led2 = 6; // pino LED2
const int led3 = 7; // pino LED3

void setup() {
    Serial.begin(9600); // inicializa porta serial
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
}

void loop() { 
    float distancia;
    long microsec = ultrasonic.timing();
    distancia = ultrasonic.convert(microsec, Ultrasonic::CM); // distancia em centimetros

    Serial.print(distancia);
    Serial.println("cm"); // escreve valor
    delay(100);

    // verifica a distancia e liga ou desliga os LEDs
    if (distancia<60) 
        digitalWrite(led1, HIGH);

    if (distancia<30) 
        digitalWrite(led2, HIGH);
    
    if (distancia<15) 
        digitalWrite(led3, HIGH);
    
    if (distancia<5 ) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
    } else {
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
    }
    delay(500);
}