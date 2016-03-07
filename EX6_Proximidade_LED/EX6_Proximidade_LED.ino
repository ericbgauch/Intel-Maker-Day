#define pinoEco 7  //Define o pino 7 com o nome "pinoEco"
#define pinoTrigger 8 //Define o pino 8 com o nome "pinoTrigger"
#define LEDPin 13  //Define o pino 13 com o nome "LEDPin"

int maximumRange = 200;   // máximo valor
int minimumRange = 10;    // mínimo valor
long duration, distance;  // duração e distância

void setup() {
 Serial.begin (9600);
 pinMode(pinoTrigger, OUTPUT);
 pinMode(pinoEco, INPUT);
 pinMode(LEDPin, OUTPUT);
}

void loop() {
 digitalWrite(pinoTrigger, LOW);
 delayMicroseconds(2);
 digitalWrite(pinoTrigger, HIGH);
 delayMicroseconds(10);
 digitalWrite(pinoTrigger, LOW);
 duration = pulseIn(pinoEco, HIGH);
 distance = duration/58.2;

 if (distance >= maximumRange || distance <= minimumRange){
   Serial.println("-1");
   digitalWrite(LEDPin, HIGH);
 }
 else {
   Serial.println(distance);
   digitalWrite(LEDPin, LOW);
 }
 delay(50);
}
