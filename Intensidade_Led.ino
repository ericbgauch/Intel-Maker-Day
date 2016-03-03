const int potPin = 0;
const int ledPin = 13;
int val = 0;
// select the input pin for the potentiometer
// select the pin for the LED
// variable to store the value coming from the sensor
void setup()
{
pinMode(ledPin, OUTPUT);
}
// declare the ledPin as an OUTPUT
void loop() {
//val = analogRead(potPin)/50;
val = map(analogRead(potPin), 0, 1023, 0, 20);
 
digitalWrite(ledPin, HIGH);
delay(val);
digitalWrite(ledPin, LOW);
delay(21-val);
}
