int trigpinL = A3;

int trigpinL = A5;

int trigpinL = A5;

int echopinL = A3;
int echopinF = A1;
int echopinR = A2;


float distanceL ;
float distanceF ;
float distanceR ;

void setup() {
  pinMode(trigpin, OUTPUT);
  pinMode(trigpin, OUTPUT);
  pinMode(trigpin, OUTPUT);

  pinMode(echopinL, INPUT);
  pinMode(echopinF, INPUT);
  pinMode(echopinR, INPUT);
  
  
  Serial.begin(9600);

}

void loop()
{
    digitalWrite(trigpin, HIGH);
    delay(100);
    digitalWrite(trigpin, HIGH);
    delay(100);
    digitalWrite(trigpin, HIGH);

    
    digitalWrite(trigpin, LOW);
    
    distanceL = pulseIn(echopinL, HIGH);
    distanceF = pulseIn(echopinF, HIGH);
    distanceR = pulseIn(echopinR, HIGH);
//* 0.034) / 2;

    
    Serial.println(floor(distanceL));
    Serial.println(floor(distanceF));
    Serial.println(floor(distanceR));

}
