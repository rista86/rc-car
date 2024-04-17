const int pwmMotorA = D1;
const int pwmMotorB = D2;
const int dirMotorA = D3;
const int dirMotorB = D4;

int motorSpeed = 500;

void setup() {
  Serial.begin(115200);
  Serial.println();

  pinMode(pwmMotorA , OUTPUT);
  pinMode(pwmMotorB, OUTPUT);
  pinMode(dirMotorA, OUTPUT);
  pinMode(dirMotorB, OUTPUT);

  Serial.println("Motor SHield 12E Initialized");
  delay(5000);
}

void loop() {
  Serial.println("Activate A");
  digitalWrite(pwmMotorA, motorSpeed);
  digitalWrite(dirMotorA, LOW);
  delay(500);

  Serial.println("Reverse A");
  digitalWrite(dirMotorA, HIGH);
  delay(500);

  Serial.println("Stop A");
  digitalWrite(pwmMotorA, 0);
  digitalWrite(dirMotorA, LOW);
  delay(2000);

  Serial.println("Activate B");
  digitalWrite(pwmMotorB, motorSpeed);
  digitalWrite(dirMotorB, LOW);
  delay(500);

  Serial.println("Reverse B");
  digitalWrite(dirMotorB, HIGH);
  delay(500);

  Serial.println("Stop B");
  digitalWrite(pwmMotorB, 0);
  digitalWrite(dirMotorB, LOW);
  delay(2000);
}