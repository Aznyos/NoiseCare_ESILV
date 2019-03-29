
int compteur=0;
float limite=2800;
int trigPin= 11;
int echoPin = 12;
long duration, cm;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  delay(10000);
  Serial.println("Date,Limite,dB");
}

void loop()
{
  compteur++;
  
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  // Convert the time into a distance
  cm = (duration/2) / 29.1;    
  
  Serial.print(compteur);
  Serial.print(",");
  Serial.print(limite);
  Serial.print(",");
  Serial.println(cm);
  
  if(cm >= limite){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {digitalWrite(LED_BUILTIN, LOW);}
  delay(1000);
}
