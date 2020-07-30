int arsalan_array[]={2,3,4,5,6,7};
int i=0;
void setup() {
 
 for (i=0;i<6;i++)
{
  pinMode(arsalan_array[i],OUTPUT);
}
}
void loop() {
  for (i=0;i<6;i++)
  {
    digitalWrite(arsalan_array[i],HIGH);
    delay(1000);
    digitalWrite(arsalan_array[i],LOW);
    delay(1000);
    }
   for (i=5;i>=0;i--)
   {
    
    digitalWrite(arsalan_array[i],HIGH);
    delay(1000);
    digitalWrite(arsalan_array[i],LOW);
    delay(1000);
    }
    }
    
  
