#define echoPin 6
#define trigpin 7
#define buzzerPin 8

int maximumRange = 50;
int minumumRange = 0;

void setup() {
  pinMode(trigpin , OUTPUT);
  pinMode (echoPin , INPUT);
  pinMode (buzzerPin , OUTPUT);

}

void loop() {

  int olcum = mesafe (maximumRange , minumumRange);
  melodi(olcum*10);

}

int mesafe (int maxRange , int minRange){
  long duration , distance ;
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2); // ardunio 2 mikrosaniye beklicek
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  duration = pulseIn(echoPin,HIGH);
  distance = duration /58.2;
  delay(50);

  if (distance >= maxRange || distance <= minRange) // eğer ifden sonra süslü parantezi açmaz isek if sadece altındaki "ilk" satırı kapsar eğer ilk satır yanlışsa bir altına geçer
  return 0;
  return distance;
  
}

int melodi ( int dly){
tone(buzzerPin,440); // 440 ton ayarını belirliyor
delay(dly);
noTone(buzzerPin);
delay(dly);
  
}
