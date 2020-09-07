/* 29 -- Multiplos Leds
 
 Acesse https://linktr.ee/progui
 
 Conteúdo para o material de estudos do 
 Introdução ao Arduino com 14 Projetos 
 Versao 1.0
 */

const int sensorPin = 0; // inicializa pino do sensor
const int ledPin = 9; // inicializa pino do LED

int maxThreshold = 0;     
int minThreshold = 1023;
int lightLevel;
int calibrandoLuz;

void setup()
{
  pinMode(ledPin, OUTPUT);    // inicializa o pino do LED
  Serial.begin(9600);
}

void loop()
{
  lightLevel = analogRead(sensorPin);  // leitura do sensor
  Serial.print(lightLevel); // escreve na saida serial

  calibrandoLuz = map(lightLevel, 0, 1023, 0, 255);

  Serial.print(" ... "); 		          // separador
  Serial.print(calibrandoLuz);        // imprime na porta serial
  analogWrite(ledPin, calibrandoLuz); // muda a intencisade do LED
}
