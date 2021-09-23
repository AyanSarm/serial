void setup() {
  Serial.begin(9600);  
  pinMode(13, OUTPUT);
}

void loop() {
  if(Serial.available())
  {
    int res = Serial.read();
    if(res == '1')
    {
      digitalWrite(13, HIGH);
    }
    else if(res == '2')
    {
      digitalWrite(13, LOW);
    }
  }
}
