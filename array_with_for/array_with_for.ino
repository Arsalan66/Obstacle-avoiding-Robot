int arsalan_array[]={2,3,4,5,6,7};
int i=0;
void setup() {
  // put your setup code here, to run once:
for(i=0;i<6;i++){
  pinMode(arsalan_array[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
for (i=0;i<6;i++){
  digitalWrite(arsalan_array[i],HIGH);
  delay(500);
  digitalWrite(arsalan_array[i],LOW);
  delay(500);
}
for (i=5;i>=0;i--)
{
  digitalWrite(arsalan_array[i],HIGH);
  delay(500);
  digitalWrite(arsalan_array[i],LOW);
  delay(500);
}
}
