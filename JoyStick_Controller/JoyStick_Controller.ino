// Arduino pin numbers

const int sw_pin = 2; //digital pin connected to swithch output
const int x_pin = 0; //analog pin connected to X output
const int y_pin = 1; //analog pin connected to Y output
const int led = 13;

void setup() {
 pinMode(sw_pin, INPUT);
 pinMode(led, OUTPUT);
 digitalWrite(sw_pin,HIGH);
 Serial.begin(115200);
}

void loop() {
  Serial.print("Swith: ");
  int buttPress = digitalRead(sw_pin);
  if (buttPress){
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
    delay(50);
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
    delay(50);
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
    delay(50);
  }
  Serial.print(digitalRead(sw_pin));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(x_pin));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.print(analogRead(y_pin));
  Serial.print("\n\n");
  delay(500);

}
