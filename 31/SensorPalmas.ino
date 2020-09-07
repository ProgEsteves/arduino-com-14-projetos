/* 31 -- Sensor de palmas
 
 Acesse https://linktr.ee/progui
 
 Conteúdo para o material de estudos do 
 Introdução ao Arduino com 14 Projetos 
 Versao 1.0
 */

int microfone = 7;   // pino do sensor
int led = 8;         // pino do LED
int contaPalmas = 0; // contador de palmas

long tempo;
long inicio = 0;
long tempMax = 1000;   // tempo máximo entre o pulso seguinte
long tempMin = 300;    // tempo minimo entre o pulso seguinte
long tamanhoSom = 100; // tamanho do som esperado

void setup() {
    pinMode(microfone, INPUT); // inicia microfone
    pinMode(led, OUTPUT);      // inicia LED
    digitalWrite(led, HIGH);   // desliga LED
}

void loop() {
    tempo = millis(); // inicia a contagem de tempo
    long tempoAposPalma = tempo - inicio; // tempo entre os pulsos

    // verifica se o pulso recebido esta no intervalo configurado
    if (tempoAposPalma >= tamanhoSom && digitalRead(microfone) == LOW) {
    
        // se nao estiver no intervalo de tempo, reiniciar a contagem
        if (tempoAposPalma < tempMin || tempoAposPalma > tempMax) {
            contaPalmas = 0;
            inicio = millis();
        } else {
            contaPalmas++; // conta os pulsos
            inicio = millis();
        }
        
        // verifica a contagem de palmas e se o LED esta ligado
        if((contaPalmas=1) && (digitalRead(led)==HIGH)){
            digitalWrite(led, LOW); // liga LED
            contaPalmas = 0;
        }
        
        // verifica a contadem de palmas e se o LED esta desligado
        if((contaPalmas=1) && (digitalRead(led)==LOW)){
            digitalWrite(led, HIGH); // desliga LED
            contaPalmas = 0;
        }
    }
}