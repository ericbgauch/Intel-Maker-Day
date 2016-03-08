#define escutaSom 7 // entrada para escutar som (Echo)
#define emiteSom 8 // saída para emitir som (Trigger)
#define LED 13

int maximumRange = 200;   // máximo valor
int minimumRange = 10;    // mínimo valor
long duration, distance;  // duração e distância

void setup() {
 Serial.begin (9600);
 pinMode(emiteSom, OUTPUT);
 pinMode(escutaSom, INPUT);
 pinMode(LED, OUTPUT);
}

void loop() {
 digitalWrite(emiteSom, LOW);
 delayMicroseconds(2);
 digitalWrite(emiteSom, HIGH);
 delayMicroseconds(10);
 digitalWrite(emiteSom, LOW);
 duration = pulseIn(escutaSom, HIGH);
 distance = duration/58.2;

 if (distance >= maximumRange || distance <= minimumRange){
   Serial.println("-1");
   digitalWrite(LED, HIGH);
 }
 else {
   Serial.println(distance);
   digitalWrite(LED, LOW);
 }
 delay(50);
}
