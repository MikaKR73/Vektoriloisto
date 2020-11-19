#define LedS1V 10 // Määritellään ledin paikka
#define LedS2V 11 // Määritellään ledin paikka
#define maksimiS1 255 // Maksimi tehoS1 ledille
#define maksimiS2 250 // Maksimi tehoS1 ledille
#define minimiS1 0 // Määrittää Minimin
#define minimiS2 10 // Määrittää Minimin
#define lisaaS1 1 //Määrittää laskenta nopeuden
#define lisaaS2 2 //Määrittää laskenta nopeuden

void setup(){
  pinMode(LedS1V, OUTPUT);
    Serial.begin(9600);
}
#define VIIVE 10 // Määritetään viive
int tehoS1 = 0, tehoS2 = 0; // Märittää tehoS1n nollaan
bool laskentaS1 = true, laskentaS2 = true; // Merkitsee pienenetäänkö ledin tehoS1ja

void BreathS1(){
 analogWrite(LedS1V, tehoS1); // Kirjotaa ledille tehoS1
    if(laskentaS1 == true){
  tehoS1 = tehoS1 + lisaaS1; //Kasvattaa muuttujaa yhdellä ja tulostaa tiedot
    Serial.print("Menee ylös S1: ");
    Serial.println(tehoS1);
 }else{
   tehoS1 = tehoS1 - lisaaS1; //Pienetää muutujaa ja tulostaa tiedot
   Serial.print("Menee alas S1: ");
   Serial.println(tehoS1);
 }
 if(tehoS1 >= maksimiS1){
   laskentaS1 = false; // merkitsee muuttujan pienetämiseen kun saatu maksimi arvo
   Serial.print("Saavutettu maksimi S1: ");
   Serial.println(tehoS1);
 }
 if(tehoS1 <= minimiS1){
  laskentaS1 = true; // Merkitsee muuttujan suurentamiseen kun saatu minimi
   Serial.print("Saavutettu minimi S1: ");
   Serial.println(tehoS1);
 }
}

void BreathS2(){
 analogWrite(LedS2V, tehoS2); // Kirjotaa ledille tehoS2
    if(laskentaS2 == true){
  tehoS2 = tehoS2 + lisaaS2; //Kasvattaa muuttujaa yhdellä ja tulostaa tiedot
    Serial.print("Menee ylös S2: ");
    Serial.println(tehoS2);
 }else{
   tehoS2 = tehoS2 - lisaaS2; //Pienetää muutujaa ja tulostaa tiedot
   Serial.print("Menee alas S2: ");
   Serial.println(tehoS2);
 }
 if(tehoS2 >= maksimiS2){
   laskentaS2 = false; // merkitsee muuttujan pienetämiseen kun saatu maksimi arvo
   Serial.print("Saavutettu maksimi S2: ");
   Serial.println(tehoS2);
 }
 if(tehoS2 <= minimiS2){
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
