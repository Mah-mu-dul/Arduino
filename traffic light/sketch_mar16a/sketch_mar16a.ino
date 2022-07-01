void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(3,OUTPUT);

  pinMode(A0,INPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int ldr = analogRead(A0);
  Serial.println(ldr);
  
  digitalWrite(3,HIGH); //red light on 
  delay(3000);


  digitalWrite(5,HIGH);  //yellow loght on 
  delay(1000);

  digitalWrite(3,LOW);   //red light off
  digitalWrite(5,LOW); //yellow light off  
  
  digitalWrite(10,HIGH);   //green light on
  delay(3000);
  digitalWrite(10,LOW);   //green light off
  delay(500);


  //blink

   digitalWrite(10,HIGH);   //green light on
  delay(500);
  digitalWrite(10,LOW);   //green light off
  delay(500);
   digitalWrite(10,HIGH);   //green light on
  delay(500);
  digitalWrite(10,LOW);   //green light off
  delay(500);
     digitalWrite(10,HIGH);   //green light on
  delay(500);
  digitalWrite(10,LOW);   //green light off
  delay(500);
 
}
