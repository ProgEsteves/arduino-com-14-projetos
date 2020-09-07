/* 26 -- LED em Cascata
 
 Acesse https://linktr.ee/progui
 
 Conteúdo para o material de estudos do 
 Introdução ao Arduino com 14 Projetos 
 Versao 1.0
 */

int timer = 100;           // temporizador, quanto maior, mais lento

void setup() {
  // inicializa toas os pinos de LED
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // rotaciona do LED no pino mais baixo até o pino mais alto (2 - 8)
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    // liga o LED
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // desliga o LED
    digitalWrite(thisPin, LOW);
  }

  // rotaciona do LED no pino mais alto até o pino mais baixo (7 - 2)
  for (int thisPin = 7; thisPin >= 2; thisPin--) {
    // liga o LED
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // desliga o LED
    digitalWrite(thisPin, LOW);
  }
}
