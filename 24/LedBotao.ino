/* 24 -- LED com botao
 
 Acesse https://linktr.ee/progui
 
 Conteúdo para o material de estudos do 
 Introdução ao Arduino com 14 Projetos 
 Versao 1.0
 */

const int buttonPin = 2;     // pino do botao
const int ledPin =  13;      // pino do LED

int buttonState = 0;         // inicia status do botao

void setup() {
  pinMode(ledPin, OUTPUT);   // inicializa o led
  pinMode(buttonPin, INPUT); // inicializa o botao
}

void loop() {
  buttonState = digitalRead(buttonPin); // leitura do estado do botao

  // verifica se o botao foi pressionado
  // se houver alteracao do status, liga o LED
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH); // liga o LED
  } else {
    digitalWrite(ledPin, LOW); // desliga o LED
  }
}
