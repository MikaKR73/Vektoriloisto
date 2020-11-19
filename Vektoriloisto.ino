#define LedS1V 10 // Määritellään ledin paikka
#define maksimi 255 // Maksimi teho ledille

void setup(){
  pinMode(LedS1V, OUTPUT);
    Serial.begin(9600);
}
#define VIIVE 50 // Määritetään viive
int teho = 0;
bool laskenta = true; //merkitsee pienenetäänkö ledin tehoja

void loop(){
  analogWrite(LedS1V, teho);
    int x = Serial.read();
 if(laskenta == true){
  teho++; //Kasvattaa muuttujaa yhdellä
    Serial.print("Menee ylös: ");
    Serial.println(teho);
 }else{
   teho--; //Pienetää muutujaa
   Serial.print("Menee alas: ");
   Serial.println(teho);
 }
 if(teho >= maksimi){
   laskenta = false;
 }
 if(teho <=0){
  laskenta = true;
 }
   delay(VIIVE);
}
