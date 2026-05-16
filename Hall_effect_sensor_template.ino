/*
  A3144 Hall Effect Sensor Detection
  it will print "Magnet Detected" when a magnet
  is brought near the sensor.
*/

#define HALL_SENSOR_PIN 2

void setup() 
{
  Serial.begin(9600);
  pinMode(HALL_SENSOR_PIN, INPUT);    // think how you would avoid floating pin?

  Serial.println("Wave a magnet near the sensor...");
}

void loop()
{
  // A3144 outputs LOW when magnet is detected
  if (digitalRead(HALL_SENSOR_PIN) == LOW) 
  {
    Serial.println("Magnet Detected");
    delay(300);    // You can Optimise this is further code, where blocking may/maynot cause issues with calculation.
  }
}
