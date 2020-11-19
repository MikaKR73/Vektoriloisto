#define LedS1V 10 // Määritellään ledin paikka
#define LedS2V 11 // Määritellään ledin paikka
#define maksimi 255 // Maksimi tehoS1 ledille
#define minimi 0

void setup(){
  pinMode(LedS1V, OUTPUT);
    Serial.begin(9600);
}
#define VIIVE 25 // Määritetään viive
int tehoS1 = 0, tehoS2 = 0; // Märittää tehoS1n nollaan
bool laskentaS1 = true, laskentaS2 = true; // Merkitsee pienenetäänkö ledin tehoS1ja

void BreathS1(){
  analogWrite(LedS1V, tehoS1); // Kirjotaa ledille tehoS1n
    int x = Serial.read();
 if(laskentaS1 == true){
  tehoS1++; //Kasvattaa muuttujaa yhdellä ja tulostaa tiedot
    Serial.print("Menee ylös S1: ");
    Serial.println(tehoS1);
 }else{
   tehoS1--; //Pienetää muutujaa ja tulostaa tiedot
   Serial.print("Menee alas S1: ");
   Serial.println(tehoS1);
 }
 if(tehoS1 >= maksimi){
   laskentaS1 = false; // merkitsee muuttujan pienetämiseen kun saatu maksimi arvo
   Serial.print("Saavutettu maksimi S1: ");
   Serial.println(tehoS1);
 }
 if(tehoS1 <= minimi){
  laskentaS1 = true; // Merkitsee muuttujan suurentamiseen kun saatu minimi
   Serial.print("Saavutettu minimi S1: ");
   Serial.println(tehoS1);
 }
}

void BreathS2(){
  analogWrite(LedS2V, tehoS2); // Kirjotaa ledille tehoS1n
    int x = Serial.read();
 if(laskentaS2 == true){
  tehoS2++; //Kasvattaa muuttujaa yhdellä ja tulostaa tiedot
    Serial.print("Menee ylös S2: ");
    Serial.println(tehoS2);
 }else{
   tehoS2--; //Pienetää muutujaa ja tulostaa tiedot
   Serial.print("Menee alas S2: ");
   Serial.println(tehoS2);
 }
 if(tehoS1 >= maksimi){
   laskentaS2 = false; // merkitsee muuttujan pienetämiseen kun saatu maksimi arvo
   Serial.print("Saavutettu maksimi S2: ");
   Serial.println(tehoS2);
 }
 if(tehoS2 <= minimi){
  laskentaS2 = true; // Merkitsee muuttujan suurentamiseen kun saatu minimi
   Serial.print("Saavutettu minimi S2: ");
   Serial.println(tehoS2);
 }
}


void loop(){
  BreathS1();
  BreathS2();
  delay(VIIVE); // Viive ennekuin jatkaa
}
