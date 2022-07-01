int trigpin = 9;
int echopin = 11;
float distance ;
float duration;
int loopCount =0;
int lightOn = 0;
int count = 0;
float holder = 0;

void setup() {
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(10,OUTPUT);
  
  Serial.begin(9600);

}

void loop()
{
  
   digitalWrite(trigpin, LOW);
  delay(2);

  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin, HIGH);
  distance = (duration*0.034)/2;
  //
//  Serial.print("thedistance is = ");
//  Serial.println(distance);
  
//  Serial.print("cm");
  if(distance < 20 ){
    if(lightOn == 0 && count == 0){
      lightOn = 1;
      count = 1 ;
      }
      if (lightOn == 1 && count == 0){
        lightOn = 0;
        count = 1 ;
        }
    
  }
  else {
    count = 0 ;
    }
  if(lightOn == 1){
    digitalWrite(10,HIGH);
    }
  else {
    digitalWrite(10,LOW);
  }

}
