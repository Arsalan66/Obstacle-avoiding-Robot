int m1p1=6;
int m1p2=3;
int m2p1=10;
int m2p2=5;
int echo_front=2;
int trig_front=7;
int echo_left=8;
int trig_left=9;
int echo_right=4;
int trig_right=11;

long time_front,distance_front,minimum_front,distance_left,minimum_left,time_left,distance_right,minimum_right,time_right;
 
void setup()
{
  Serial.begin(9600);
  pinMode(trig_front,OUTPUT);
  pinMode(echo_front,INPUT);
  pinMode(trig_left,OUTPUT);
  pinMode(echo_left,INPUT);
  pinMode(trig_right,OUTPUT);
  pinMode(echo_right,INPUT);
  pinMode(m1p1,OUTPUT);
  pinMode(m1p2,OUTPUT);
  pinMode(m2p1,OUTPUT);
  pinMode(m2p2,OUTPUT);
}

void loop()
{
     
    sensor_front();
    sensor_left();
    sensor_right();
    forward_robot();
   
   
    Serial.println("Robot Forward");
   
  if(distance_front<=minimum_front)
    {
      stop_robot();
      delay(500);
      backward();
      delay(500);
      tern_left();
     
    }
    if(distance_front<=minimum_front && distance_left<=minimum_left)
    {
       tern_right();
   
    }
    if(distance_front<=minimum_front && distance_right<=minimum_right)
    {
      tern_left();
    }
    if(distance_front<=minimum_front && distance_left<=minimum_left && distance_right<=minimum_right)
    {
      stop_robot();
    
    }
    if (distance_left<=minimum_left)
{
  tern_left();
}
if(distance_right<=minimum_right)
{
  tern_right();
  }
    delay(50);
   
}
 
void sensor_front()
{
digitalWrite(trig_front, LOW);
delayMicroseconds(2);
digitalWrite(trig_front, HIGH);
delayMicroseconds(20);
digitalWrite(trig_front, LOW);
 
time_front=pulseIn(echo_front,HIGH);
distance_front=time_front/10;
minimum_front=60;  
}

void sensor_left()
{
digitalWrite(trig_left, LOW);
delayMicroseconds(2);
digitalWrite(trig_left, HIGH);
delayMicroseconds(20);
digitalWrite(trig_left, LOW);
 
time_left=pulseIn(echo_left,HIGH);
distance_left=time_left/10;
minimum_left=60;    
}

void sensor_right()
{
digitalWrite(trig_right, LOW);
delayMicroseconds(2);
digitalWrite(trig_right, HIGH);
delayMicroseconds(20);
digitalWrite(trig_right, LOW);
 
time_right=pulseIn(echo_right,HIGH);
distance_right=time_right/10;
minimum_right=60;
}

void forward_robot()
{
 analogWrite(m1p1,60);
 analogWrite(m1p2,0);
 analogWrite(m2p1,60);
 analogWrite(m2p2,0);

}

void stop_robot()
{
 analogWrite(m1p1,0);
 analogWrite(m1p2,0);
 analogWrite(m2p1,0);
 analogWrite(m2p2,0);
 
}

void tern_left()
{
 analogWrite(m1p1,LOW);
 analogWrite(m1p2,LOW);
 analogWrite(m2p1,60);
 analogWrite(m2p2,LOW);
 
}

void tern_right()
{
 analogWrite(m1p1,60);
 analogWrite(m1p2,LOW);
analogWrite(m2p1,LOW);
 analogWrite(m2p2,LOW);
}
void backward()
{
 analogWrite(m1p1,0);
 analogWrite(m1p2,60);
 analogWrite(m2p1,0);
 analogWrite(m2p2,60);

}
