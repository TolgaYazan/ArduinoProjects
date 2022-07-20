
#define kirmizi_led 8
void setup() {
  
  
  pinMode(kirmizi_led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8,HIGH);
delay(1000);
digitalWrite(8,LOW);
delay(1000);
}
