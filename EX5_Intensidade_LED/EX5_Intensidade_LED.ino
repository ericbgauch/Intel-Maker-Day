const int LED = 13; // constante que define LED como pino 13
const int POTENCIOMETRO = 0; // constante que define POTENCIOMETRO como pino 0
int valor = 0; // lugar onde será guardado um valor (que é variável)

void setup() {
  pinMode(LED, OUTPUT); // define LED como saída
  pinMode(POTENCIOMETRO, INPUT);  // define POTENCIOMETRO como entrada
  Serial.begin(9600); // inicia a comunicação com o computador
}

void loop() {
  Serial.print( analogRead(POTENCIOMETRO) ); // mostra o valor lido

  valor = analogRead(POTENCIOMETRO)/50; // divide o valor lido e guarda em valor
  //valor = map(analogRead(POTENCIOMETRO), 0, 1023, 0, 20); // mapeia o valor lido

  //Serial.print( " " ); // acrescenta um espaço vazio
  //Serial.print( valor );  // mostra o valor
  Serial.println();  // pula uma linha

  digitalWrite(LED, HIGH);  // liga o LED
  delay(valor);   // aguarda o tempo definido em valor
  digitalWrite(LED, LOW); // desliga o LED
  delay(21 - valor); // aguarda um tempo "diferente"
} // repete
