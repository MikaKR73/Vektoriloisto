#define LedS1V 10
#define maksimi 255

void setup(){
  pinMode(LedS1V, OUTPUT);
    Serial.begin(9600);
}
#define VIIVE 50
int teho=0;

void loop(){
  analogWrite(LedS1V, teho);
    int x = Serial.read();
    Serial.println(teho);
 if(teho < maksimi){
  teho++; //Kasvattaa muuttujaa yhdellä
 }
  if(teho >= maksimi){
    teho = 0; //Nolaa muuttujan
  }
  delay(VIIVE);
}
