int botao = 0;  //Cria uma variável que irá guardar o valor do botao

void setup() {
  pinMode(13, OUTPUT);   //Inicializa o led conectado no pino 13
  pinMode(2, INPUT);     //Inicializa o botao conectado no pino 2
}

void loop() {
  botao = digitalRead(2);   //Pergunta ao botao se ele está sendo apertado ou não
  if (botao == HIGH) {      //Se sim, o valor dele será "HIGH"
    digitalWrite(13, HIGH); //Liga o led conectado no pino 13
  } else {                  //Se o botão não está sendo apertado
    digitalWrite(13, LOW);  //Desliga o led
  }
}
