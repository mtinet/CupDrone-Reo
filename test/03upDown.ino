#define frontLeft 6
#define frontRight 10
#define rearRight 9
#define rearLeft 5

void setup() {
  Serial.begin(9600);
}

void loop() {
  int userSpeed = 0;

  if(Serial.available() > 0) {
    userSpeed = Serial.read();
  }

  motorSpeed_update(userSpeed);
  delay(1000);
}

void motorSpeed_update(int motorSpeed) {
  analogWrite(frontLeft, motorSpeed);
  analogWrite(frontRight, motorSpeed);
  analogWrite(rearRight, motorSpeed);
  analogWrite(rearLeft, motorSpeed); 
}
