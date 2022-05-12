#define echoPin 9
#define trigPin 10

long duration;
int distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); // Wait for 1000 millisecond(s)
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = duration*0.0342/2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm ");
}