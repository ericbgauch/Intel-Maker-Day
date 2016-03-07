#define echoPin 7 // Echo Pino
#define trigPin 8 // Trigger Pino
#define LEDPin 9

int maximumRange = 200; // máximo valor
int minimumRange = 10; // mínimo valor
long duration, distance; // duração e distância

void setup() {
 Serial.begin (9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(LEDPin, OUTPUT);
}

void loop() {
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
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
