void setup() {      // inicialização
  pinMode(13, OUTPUT); // define pino 13 como saída
  pinMode(12, OUTPUT); // define pino 12 como saída
}

void loop() {      // repete o que esta entre {}
  digitalWrite(13, HIGH);   // liga o LED conectado na saída 13
  digitalWrite(12, LOW);    // desliga a BUZINA conectada na saída 12
  delay(1000);              // aguarda 1 segundo
  digitalWrite(13, LOW);    // desliga o LED conectado na saída 13
  digitalWrite(12, HIGH);   // liga a BUZINA conectada na saída 12
  delay(1000);              // aguarda mais 1 segundo
} // repete
