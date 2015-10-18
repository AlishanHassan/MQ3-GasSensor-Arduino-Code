//Power from 3.3V pin, ground to ground
int inputPin = A0; //Reads off analog pin A0

void setup() {
    Serial.begin(9600); //Get serial reading at 9600 baud 
}

void loop() {
  int sensorReading = analogRead(inputPin);
  Serial.println(sensorReading);
  delay(100); //100 ms delay

}
