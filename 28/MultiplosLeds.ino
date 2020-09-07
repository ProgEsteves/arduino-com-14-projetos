/* 28 -- Multiplos Leds
 
 Acesse https://linktr.ee/progui
 
 Conteúdo para o material de estudos do 
 Introdução ao Arduino com 14 Projetos 
 Versao 1.0
 */

int ledPins[] = {2,3,4,5,6,7,8,9};   // inicializa um vetor para armazenar os numero de cada um dos 8 LEDs 

void setup()
{
  pinMode(ledPins[0],OUTPUT);  // ledPins[0] = 2
  pinMode(ledPins[1],OUTPUT);  // ledPins[1] = 3
  pinMode(ledPins[2],OUTPUT);  // ledPins[2] = 4
  pinMode(ledPins[3],OUTPUT);  // ledPins[3] = 5
  pinMode(ledPins[4],OUTPUT);  // ledPins[4] = 6
  pinMode(ledPins[5],OUTPUT);  // ledPins[5] = 7
  pinMode(ledPins[6],OUTPUT);  // ledPins[6] = 8
  pinMode(ledPins[7],OUTPUT);  // ledPins[7] = 9
}

void loop()
{
  int index;
  int delayTime = 100; // tempo de pausa do LED

  // acende os LEDs um após o outro 
  for(index = 0; index <= 7; index = ++index)
  {
    digitalWrite(ledPins[index], HIGH);
    delay(delayTime);                
  }                                  

  // apaga todos os LEDs 
  for(index = 7; index >= 0; index = --index) 
  {
    digitalWrite(ledPins[index], LOW);
    delay(delayTime);
  }               
}
