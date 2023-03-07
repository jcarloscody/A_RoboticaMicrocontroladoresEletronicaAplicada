  int ledVermelho = 2;

  #define LED_VER 2 //constante

void setup() {
  // put your setup code here, to run once:
  /*é uma função chamada sempre que o programa inicia. Devemos usá-la para iniciar variáveis, configurar as portas do Arduino, carregar bibliotecas, etc. A função de setup() é executada apenas uma vez e sempre quando o Arduino é ligado ou quando apertamos seu botão de "Reset".*/


  pinMode(LED_VER,OUTPUT); // porta e saida. aqui diz que terá saida de força na porta 2
  /*O nome da função para configurar uma porta digital é pinMode(...). O pinMode recebe dois parâmetros, o primeiro é o número da porta e o segundo é o modus, de entrada ou saída.*/
  
  Serial.begin(9600); //monitor serial para debugar o codigo

}

void loop() {
  // put your main code here, to run repeatedly:
  piscaLed(LED_VER);
 
}

void piscaLed(int portaLed){
 digitalWrite(portaLed,1);
  delay(1000);
  digitalWrite(portaLed,0);
  delay(500);
}
