#define LedS1V 10 // Määritellään ledin paikka
#define maksimi 255 // Maksimi teho ledille
#define minimi 0

void setup(){
  pinMode(LedS1V, OUTPUT);
    Serial.begin(9600);
}
#define VIIVE 50 // Määritetään viive
int teho = 0; // Märittää tehon nollaan
bool laskenta = true; // Merkitsee pienenetäänkö ledin tehoja

void Breath(){
  analogWrite(LedS1V, teho); // Kirjotaa ledille tehon
    int x = Serial.read();
 if(laskenta == true){
  teho++; //Kasvattaa muuttujaa yhdellä ja tulostaa tiedot
    Serial.print("Menee ylös: ");
    Serial.println(teho);
 }else{
   teho--; //Pienetää muutujaa ja tulostaa tiedot
   Serial.print("Menee alas: ");
   Serial.println(teho);
 }
 if(teho >= maksimi){
   laskenta = false; // merkitsee muuttujan pienetämiseen kun saatu maksimi arvo
   Serial.print("Saavutettu maksimi: ");
   Serial.println(teho);
 }
 if(teho <= minimi){
  laskenta = true; // Merkitsee muuttujan suurentamiseen kun saatu minimi
   Serial.print("Saavutettu minimi: ");
   Serial.println(teho);
 }
   delay(VIIVE); // Viive ennekuin jatkaa
}

void loop(){
  Breath();
}
