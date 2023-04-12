// C++ code
//

//Atribuição das variáveis seria o número da porta que está conectada
const int ledgreen = 5; 
const int ledyellow = 1;
const int ledred = 9;

void setup()
{
  //declaração da saída das tres led's
  pinMode(ledgreen, OUTPUT);
  pinMode(ledyellow, OUTPUT);
  pinMode(ledred, OUTPUT);
}

void loop()
{
  //cinco segundos no verde
  digitalWrite(ledgreen, HIGH);
  delay(5000); 
  digitalWrite(ledgreen, LOW);
  delay(0); 
   
  //dois segundos no amarelo
  digitalWrite(ledyellow, HIGH);
  delay(2000); 
  digitalWrite(ledyellow, LOW);
  delay(0); 
 
  //cinco segundos no vermelho
  digitalWrite(ledred, HIGH);
  delay(5000); 
  digitalWrite(ledred, LOW);
  delay(0); 
  
  //semáforo NÃO precisa de delay(esperar)
}