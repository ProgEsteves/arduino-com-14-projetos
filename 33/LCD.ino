/* 33 -- Multiplos Leds
 
 Acesse https://linktr.ee/progui
 
 Conteúdo para o material de estudos do 
 Introdução ao Arduino com 14 Projetos 
 Versao 1.0
 */

// carrega biblioteca do LCD
#include <LiquidCrystal.h>

// inicializar a biblioteca do LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{

	lcd.begin(16, 2); // inicializa um LCD de 16x2 (16 char de largura e 2 char de altura)
	lcd.clear();	// limpa o LCD
	lcd.print("ola mundo!"); // escreve 'ola, mundo!' no LCD


}

void loop()
{
	lcd.setCursor(0, 1); 	//inicializa o cursor
	lcd.print(millis() / 1000); // exibe pelo tempo determinado
}

