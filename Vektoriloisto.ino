#define LedS1V 10

void setup(){
  pinMode(LedS1V, OUTPUT);
}
#define VIIVE 250
void loop(){
  analogWrite(LedS1V, 0);
  delay(VIIVE);
  analogWrite(LedS1V, 64);
  delay(VIIVE);
  analogWrite(LedS1V, 127);
  delay(VIIVE);
  analogWrite(LedS1V, 191);
  delay(VIIVE);
  analogWrite(LedS1V, 255);
  delay(VIIVE * 5);
}
