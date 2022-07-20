
int lm35 = A0;
int zaman =100;
int led = 8;
#define buzzer 9
int okunan_deger=0;
float  sicaklik_gerilim =0;
float sicaklik = 0;
int motorpin = 3;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(motorpin, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  okunan_deger = analogRead(lm35);
  sicaklik_gerilim = (okunan_deger /1023.0)*5000;
  sicaklik = sicaklik_gerilim /10.0;
  Serial.println(sicaklik);

  
    if (sicaklik>=20){
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    
    delay(zaman);
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    delay(zaman);
    analogWrite(motorpin, 255);
  }else{
     digitalWrite(led,LOW);
     digitalWrite(buzzer,LOW);
     analogWrite(motorpin, 0);
  }
  
  
}
