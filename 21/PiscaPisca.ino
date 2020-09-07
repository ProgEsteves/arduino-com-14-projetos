/* 21 -- Pisca LED
 
 Acesse https://linktr.ee/progui
 
 Conteúdo para o material de estudos do 
 Introdução ao Arduino com 14 Projetos 
 Versao 1.0
 */

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);   // Liga LED
  delay(1000);              // Aguarda um segundo
  digitalWrite(13, LOW);    // Desliga LED  
  delay(1000);              // Aguarda um segundo
}
