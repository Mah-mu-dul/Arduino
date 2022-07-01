int trigpin = 9;
int echopin = 11;
int switchT = 7;

int counter;
float avarage;
float distance ;
float duration;

void setup() {
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(switchT, INPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  if (digitalRead(switchT) == HIGH) {
    delay(200);
    digitalWrite(trigpin, LOW);
  

    digitalWrite(trigpin, HIGH);
    delayMicroseconds(2);
    digitalWrite(trigpin, LOW);
    duration = pulseIn(echopin, HIGH);
    distance = (duration * 0.034) / 2;
    Serial.println(floor(distance));
  }

}
