/* 30 -- Multiplos Leds
 
 Acesse https://linktr.ee/progui
 
 Conteúdo para o material de estudos do 
 Introdução ao Arduino com 14 Projetos 
 Versao 1.0
 */


const int tempPin = A0; // pino do sensor

void setup()
{
	Serial.begin(9600); // inicializa porta serial
}


void loop()
{
	float voltagem, graus; // variaveis de controle
	voltagem = analogRead(tempPin) * 0.004882814; // mede voltagem do pino analogico
	graus = (voltagem - 0.5) * 100.0; // converte a voltagem para graus Celsius
	
	Serial.print("voltage: ");
	Serial.print(voltagem);
	Serial.print("- graus Celcius: ");
	Serial.print(graus);

	delay(1000); // tempo de espera para coletar novamente (1s)
}
