int Led1= 10;
int Led2= 9; 
void setup() {
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
}

void loop() {
myblinkfunction(1000, Led1);
myblinkfunction(1000, Led2);
myblinkfunction(1000, Led2);
myblinkfunction(1000, Led1);
 
}
void myblinkfunction(int delaytime,  int led)
{
  digitalWrite(led,HIGH);
  delay (delaytime);
  digitalWrite(led,LOW);
  delay (delaytime);
  }
