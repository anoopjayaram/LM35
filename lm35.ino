void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  float voltage = sensorValue*(5.0/1023);
  float milli_volt = voltage*1000;
  float temp = milli_volt/10;
  // print out the value you read:
  Serial.println(temp);
  delay(1);        // delay in between reads for stability
}
