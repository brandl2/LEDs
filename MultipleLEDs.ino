void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  // Red LED
  digitalWrite(8, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  
  // Orange LED
  digitalWrite(9, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  
  // Yellow LED
  digitalWrite(10, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  
  // Green LED
  digitalWrite(11, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  
  // Blue LED
  digitalWrite(12, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
}
