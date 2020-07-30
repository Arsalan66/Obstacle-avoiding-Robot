int j = 0;
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
do {
    digitalWrite(13,HIGH); //Turn red LED on
    delay(500);             //Leave on for redOnTime
    digitalWrite(13,LOW);  //Turn red LED off
    delay(500);
     j = j + 1;
    // 500ms delay
  } while (j < 4);
  delay(3000);
  j=0;
}
  
