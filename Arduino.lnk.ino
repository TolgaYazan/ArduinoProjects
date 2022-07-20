int Lm35Pin=A1;
int zaman = 500;
#define motorpin 5
float okunan_deger=0;
int sicaklik_gerilim =0;
float sicaklik = 0;
int MotorDurum = 0 ;


void setup() {
  Serial.begin(9600);
  pinMode(motorpin, OUTPUT);

}

void loop() {
  okunan_deger = analogRead(Lm35Pin);
 Serial.println("okunan deger");
 Serial.println(okunan_deger);
 okunan_deger=(okunan_deger/1023.0)*5000;
 sicaklik  = okunan_deger /10;
 if(sicaklik >5){
     analogWrite(motorpin,HIGH);
      delay(zaman);
  }
  else{
    analogWrite(motorpin,LOW);
     delay(zaman);
  }
 
 
 // sicaklik = okunan_deger/9.31;
  Serial.println("Sicaklik");
  Serial.println(sicaklik);
  delay(zaman);

}
