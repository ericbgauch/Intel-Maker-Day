int botao;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);

}

void loop() {
  botao = digitalRead(2);
  if (botao == HIGH){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
  }
  else{
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  }

}
