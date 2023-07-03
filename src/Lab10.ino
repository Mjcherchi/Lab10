SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// char value;

char reading;

void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);
  // Serial.isConnected();
  Serial.available();
}

void loop()
{
  // if (Serial1.available() > 0)

  // value = "hi";

  // Serial1.print('1');
  // delay(1000);
  // Serial1.print('0');
  // delay(1000);
  if (Serial.available() > 0)
  {

    reading = Serial.read();
    Serial1.print(reading);
  }
  delay(100);
  
  if (Serial1.available() > 0)
  {
  byte questionValue = Serial1.read();
  Serial.print(questionValue);
  }
}
// else if (value == '?')
// {
//   int buttonState = digitalRead(D7);
//   Serial.println(buttonState);
// }

// char command = Serial1.read();
// if(Serial1.available = true)
//{
//
// }