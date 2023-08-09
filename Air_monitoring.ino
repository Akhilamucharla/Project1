// C++ code
//
int value = 0;

void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  value = analogRead(A5);
  Serial.println(value);
  if (value > 600) {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    Serial.println("ALERT ! Poisonous gas detected");
    Serial.println(analogRead(A5));
  } else {
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    Serial.println("NO poisonous gas detected");
    Serial.println(analogRead(A5));
  }
  delay(10); // Delay a little bit to improve simulation performance
}
