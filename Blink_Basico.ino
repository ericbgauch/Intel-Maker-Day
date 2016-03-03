void setup() {      //inicialização
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {      //repete o que esta entre {}
  digitalWrite(13, HIGH);   // liga o led conectado na porta 13
  digitalWrite(12, LOW);
  delay(1000);              // aguarda 1 segundo
  digitalWrite(13, LOW);    // desliga o led conectado na porta 13
  digitalWrite(12, HIGH);
  delay(1000);              // aguarda mais 1 segundo
} //repete
