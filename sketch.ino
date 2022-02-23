
int r1 = 1, r2 = 4, o1 = 2, o2 = 5, v1 = 3, v2 = 6



void setup() {
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(o1, OUTPUT);
  pinMode(o2, OUTPUT);
  pinMode(v1, OUTPUT);
  pinMode(v2, OUTPUT);
  
  pinMode(0, INPUT);
}

void loop() {
  digitalWrite(r1, HIGH); //partie qui permet d'allumer les feux normalement
  digitalWrite(r2, HIGH);
  delay(5000);
  digitalWrite(r1, LOW);
  digitalWrite(r2, LOW);
  digitalWrite(v1, HIGH);
  digitalWrite(v2, HIGH);
  delay(5000);
  digitalWrite(v1, LOW);
  digitalWrite(v2, LOW);
  digitalWrite(o1, HIGH);
  digitalWrite(o2, HIGH);
  delay(1000);
  digitalWrite(o1, LOW);
  digitalWrite(o2, LOW);
}
