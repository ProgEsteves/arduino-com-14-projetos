/* 22 -- LED Efeito fade
 
 Acesse https://linktr.ee/progui
 
 Conteúdo para o material de estudos do 
 Introdução ao Arduino com 14 Projetos 
 Versao 1.0
 */

int led = 9;           // declara pino do LED
int brightness = 0;    // brilho do LED
int fadeAmount = 5;    // passos para efeito de fade no LED

void setup() {
  // inicializa o pino do LED
  pinMode(led, OUTPUT);
}

void loop() {
  // inicializa o brilho para o LED
  analogWrite(led, brightness);

  // aumenta o brilho do LED
  brightness = brightness + fadeAmount;

  // reverte o brilho do LED
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // aguarda 30 milisegundos
  delay(30);
}
