int soilSensor = A0; //A0 pin
int pumpPin = 8; //relay pin

void setup() {
  pinMode(soilSensor, INPUT);
  pinMode(pumpPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(analogRead(soilSensor) >= 400){
    Serial.println(analogRead(soilSensor));
    digitalWrite(pumpPin, HIGH);
    delay(5000); // Pump runnig time (1.5 second)
    digitalWrite(pumpPin, LOW);
  }
  else{
    Serial.println(analogRead(soilSensor));
  }
  delay(3); // 1hour (pump stop time)
}