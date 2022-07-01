char Incoming_value = 0;

void setup() {
 Serial.begin(9600);
 pinMode(12,OUTPUT);
 
}

void loop() {
 
  Incoming_value = Serial.read();
  Serial.print(Incoming_value);
  Serial.print("\n");
  if(Incoming_value == 'F'){
    digitalWrite(12,HIGH);
    }
   else if(Incoming_value == 'B'){
    digitalWrite(12,LOW);
   }
   
  
}
