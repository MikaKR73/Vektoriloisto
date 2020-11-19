#define LedS1V 10 // Määritellään ledin paikka
#define LedS2V 11 // Määritellään ledin paikka
#define LedS3V 9 // Määritellään ledin paikka
#define LedS4V 6 // Määritellään ledin paikka
#define LedS5V 5 // Määritellään ledin paikka
#define LedS6V 3 // Määritellään ledin paikka
#define maksimiS1 255 // Maksimi tehoS1 ledille
#define maksimiS2 250 // Maksimi tehoS1 ledille
#define maksimiS3 250 // Maksimi tehoS1 ledille
#define maksimiS4 250 // Maksimi tehoS1 ledille
#define maksimiS5 250 // Maksimi tehoS1 ledille
#define maksimiS6 250 // Maksimi tehoS1 ledille
#define minimiS1 0 // Määrittää Minimin
#define minimiS2 0 // Määrittää Minimin
#define minimiS3 0 // Määrittää Minimin
#define minimiS4 0 // Määrittää Minimin
#define minimiS5 0 // Määrittää Minimin
#define minimiS6 0 // Määrittää Minimin
#define lisaaS1 1 //Määrittää laskenta nopeuden
#define lisaaS2 2 //Määrittää laskenta nopeuden
#define lisaaS3 3 //Määrittää laskenta nopeuden
#define lisaaS4 1 //Määrittää laskenta nopeuden
#define lisaaS5 2 //Määrittää laskenta nopeuden
#define lisaaS6 3 //Määrittää laskenta nopeuden

void setup(){
  pinMode(LedS1V, OUTPUT);
  pinMode(LedS2V, OUTPUT);
  pinMode(LedS3V, OUTPUT);
  pinMode(LedS4V, OUTPUT);
  pinMode(LedS5V, OUTPUT);
  pinMode(LedS6V, OUTPUT);
    Serial.begin(9600);
}
#define VIIVE 10 // Määritetään viive

int tehoS1 = 0, tehoS2 = 0, tehoS3 = 0, tehoS4 = 0, tehoS5 = 0, tehoS6 = 0; // Märittää tehoS1 ja tehoS2 nollaan
bool laskentaS1 = true, laskentaS2 = true, laskentaS3 = true, laskentaS4 = true, laskentaS5 = true, laskentaS6 = true; // Merkitsee pienenetäänkö ledin laskentaS1 ja laskenta S2

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

void BreathS3(){
 analogWrite(LedS3V, tehoS3); // Kirjotaa ledille tehoS3
    if(laskentaS3 == true){
  tehoS3 = tehoS3 + lisaaS3; //Kasvattaa muuttujaa yhdellä ja tulostaa tiedot
    Serial.print("Menee ylös S3: ");
    Serial.println(tehoS1);
 }else{
   tehoS3 = tehoS3 - lisaaS3; //Pienetää muutujaa ja tulostaa tiedot
   Serial.print("Menee alas S3: ");
   Serial.println(tehoS3);
 }
 if(tehoS3 >= maksimiS3){
   laskentaS3 = false; // merkitsee muuttujan pienetämiseen kun saatu maksimi arvo
   Serial.print("Saavutettu maksimi S3: ");
   Serial.println(tehoS3);
 }
 if(tehoS3 <= minimiS3){
  laskentaS3 = true; // Merkitsee muuttujan suurentamiseen kun saatu minimi
   Serial.print("Saavutettu minimi S3: ");
   Serial.println(tehoS3);
 }
}

void BreathS4(){
 analogWrite(LedS4V, tehoS4); // Kirjotaa ledille tehoS4
    if(laskentaS4 == true){
  tehoS4 = tehoS4 + lisaaS4; //Kasvattaa muuttujaa yhdellä ja tulostaa tiedot
    Serial.print("Menee ylös S4: ");
    Serial.println(tehoS1);
 }else{
   tehoS4 = tehoS4 - lisaaS4; //Pienetää muutujaa ja tulostaa tiedot
   Serial.print("Menee alas S4: ");
   Serial.println(tehoS4);
 }
 if(tehoS1 >= maksimiS4){
   laskentaS4 = false; // merkitsee muuttujan pienetämiseen kun saatu maksimi arvo
   Serial.print("Saavutettu maksimi S4: ");
   Serial.println(tehoS4);
 }
 if(tehoS4 <= minimiS4){
  laskentaS4 = true; // Merkitsee muuttujan suurentamiseen kun saatu minimi
   Serial.print("Saavutettu minimi S4: ");
   Serial.println(tehoS4);
 }
}

void BreathS5(){
 analogWrite(LedS5V, tehoS5); // Kirjotaa ledille tehoS5
    if(laskentaS5 == true){
  tehoS5 = tehoS5 + lisaaS5; //Kasvattaa muuttujaa yhdellä ja tulostaa tiedot
    Serial.print("Menee ylös S5: ");
    Serial.println(tehoS5);
 }else{
   tehoS5 = tehoS5 - lisaaS5; //Pienetää muutujaa ja tulostaa tiedot
   Serial.print("Menee alas S5: ");
   Serial.println(tehoS5);
 }
 if(tehoS5 >= maksimiS5){
   laskentaS5 = false; // merkitsee muuttujan pienetämiseen kun saatu maksimi arvo
   Serial.print("Saavutettu maksimi S5: ");
   Serial.println(tehoS5);
 }
 if(tehoS5 <= minimiS5){
  laskentaS5 = true; // Merkitsee muuttujan suurentamiseen kun saatu minimi
   Serial.print("Saavutettu minimi S5: ");
   Serial.println(tehoS5);
 }
}

void BreathS6(){
 analogWrite(LedS6V, tehoS6); // Kirjotaa ledille tehoS6
    if(laskentaS6 == true){
  tehoS6 = tehoS6 + lisaaS6; //Kasvattaa muuttujaa yhdellä ja tulostaa tiedot
    Serial.print("Menee ylös S6: ");
    Serial.println(tehoS6);
 }else{
   tehoS6 = tehoS6 - lisaaS6; //Pienetää muutujaa ja tulostaa tiedot
   Serial.print("Menee alas S6: ");
   Serial.println(tehoS6);
 }
 if(tehoS6 >= maksimiS6){
   laskentaS6 = false; // merkitsee muuttujan pienetämiseen kun saatu maksimi arvo
   Serial.print("Saavutettu maksimi S6: ");
   Serial.println(tehoS6);
 }
 if(tehoS6 <= minimiS6){
  laskentaS6 = true; // Merkitsee muuttujan suurentamiseen kun saatu minimi
   Serial.print("Saavutettu minimi S6: ");
   Serial.println(tehoS6);
 }
}

void loop(){
  BreathS1();
  BreathS2();
  BreathS3();
  BreathS4();
  BreathS5();
  BreathS6();
  delay(VIIVE); // Viive ennekuin jatkaa
}
