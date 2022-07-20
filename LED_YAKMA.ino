
int Lm35Pin=A1;
int led = 8;
#define buzzer 9 // noktalı virgül yok
int zaman = 500;
float okunan_deger=0;
int sicaklik_gerilim =0;
float sicaklik = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);

  Serial.begin(9600);
 
}
void loop() {

 okunan_deger = analogRead(Lm35Pin);
 Serial.println("okunan deger");
 Serial.println(okunan_deger);
 okunan_deger=(okunan_deger/1023.0)*5000;
 sicaklik  = okunan_deger /10.0;
 // sicaklik = okunan_deger/9.31;
  Serial.println("Sicaklik");
  Serial.println(sicaklik);
  delay(zaman);

  if(sicaklik >=30){
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(zaman);
    digitalWrite(led, LOW);
    digitalWrite(buzzer,LOW);
    delay(zaman);
    
  }else{
     digitalWrite(led, LOW);
     digitalWrite(buzzer,LOW);
    
  }
}
