/* 24 -- LED com Potenciometro
 
 Acesse https://linktr.ee/progui
 
 Conteúdo para o material de estudos do 
 Introdução ao Arduino com 14 Projetos 
 Versao 1.0
 */

int sensorPin = A0;   // pino do potenciometro
int ledPin = 13;      // pino do LED
int sensorValue = 0;  // tempo para armazenar o valor do sensor

void setup() {
  pinMode(ledPin, OUTPUT); // inicializa o pino do LED
}

void loop() {
  sensorValue = analogRead(sensorPin); // ler o valor do sensor
  digitalWrite(ledPin, HIGH);          // ligar o LED
  delay(sensorValue);                  // aguardar por X (sensorValue) milisegundos
  digitalWrite(ledPin, LOW);           // desliga o LED
  delay(sensorValue);                  // aguardar por X (sensorValue) mulisegundos
}
