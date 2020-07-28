# define mq2 (0)
int a=6;
void setup() {
  // initialize serial communication at 9600 bits per second:
  delay(4000);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(mq2);
  pinMode(6,OUTPUT);
  if(sensorValue>=210&&sensorValue<250)
  {
    Serial.println(sensorValue);
    digitalWrite(6,HIGH);
    delay(400);
    digitalWrite(6,LOW);
    delay(200);
  }
  else if(sensorValue>=250)
  {
    
    Serial.println(sensorValue);
    digitalWrite(6,HIGH);
    delay(400);
    digitalWrite(6,LOW);
    delay(100);
  }
  // print out the value you read:
  delay(2000);        // delay in between reads for stability
}
