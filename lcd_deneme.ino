#include <LiquidCrystal.h>
int rs = 12, en =11,d4= 5, d5 = 4, d6 = 3 ,d7=2;
LiquidCrystal lcd(rs ,en,d4, d5,d6,d7);
int lm35 = A0;
int led = 8;
#define buzzer 9
int zaman =500;
int okunan_deger=0;
float  sicaklik_gerilim =0;
float sicaklik = 0;
 


void setup() {
  lcd.begin(16,2);
  lcd.print("EN Buyuk Fener");
   Serial.begin(9600);
}

void loop() {
  okunan_deger = analogRead(lm35);
  sicaklik_gerilim = (okunan_deger /1023.0)*5000;
  sicaklik = sicaklik_gerilim /10.0;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Sicaklik");
  lcd.setCursor(0,1);
  lcd.print(sicaklik);
  lcd.print("derece");
  Serial.println(sicaklik);
  delay(zaman);

  if (sicaklik>=20){
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(zaman);
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    delay(zaman);
  }else{
     digitalWrite(led,LOW);
     digitalWrite(buzzer,LOW);
  }
  
}
