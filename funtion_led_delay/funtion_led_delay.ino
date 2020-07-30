void setup() {
pinMode(13, OUTPUT);
}

void loop() {
 
myblinkfunction(1000);
}
void myblinkfunction(int delaytime)
{
  digitalWrite(13,HIGH);
  delay(delaytime);
  digitalWrite(13,LOW);
  delay(delaytime);
  }


  
