/* 27 -- LED em Cascata
 
 Acesse https://linktr.ee/progui
 
 Conteúdo para o material de estudos do 
 Introdução ao Arduino com 14 Projetos 
 Versao 1.0
 */

const int analogPin = A0;   // pino do potenciometro
const int ledCount = 10;    // quantidade de LEDs

int ledPins[] = {
  2, 3, 4, 5, 6, 7, 8, 9, 10, 11
};   // vetor de LEDs


void setup() {
  // inicializar todos os LEDs
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

void loop() {
  // ler dados do potenciomentro
  int sensorReading = analogRead(analogPin);
  // mapear o range de 0 ate a quantidade de LEDs
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCount);

  // varrer o vetor de LEDs
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    // testa o led comparando com o level do potenciometro
    if (thisLed < ledLevel) {
      // liga o LED
      digitalWrite(ledPins[thisLed], HIGH);
    } else {
      // desliga o LED
      digitalWrite(ledPins[thisLed], LOW);
    }
  }
}



