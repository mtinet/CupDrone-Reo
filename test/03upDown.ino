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

// all motor
void motorSpeed_update(int motorSpeed) {
  analogWrite(frontLeft, motorSpeed);
  analogWrite(frontRight, motorSpeed);
  analogWrite(rearRight, motorSpeed);
  analogWrite(rearLeft, motorSpeed); 
}

// pitch(forward)
void motorSpeed_update(int motorSpeed) {
  analogWrite(frontLeft, 0);
  analogWrite(frontRight, 0);
  analogWrite(rearRight, motorSpeed);
  analogWrite(rearLeft, motorSpeed); 
}

// roll(left)
void motorSpeed_update(int motorSpeed) {
  analogWrite(frontLeft, 0);
  analogWrite(frontRight, motorSpeed);
  analogWrite(rearRight, motorSpeed);
  analogWrite(rearLeft, 0); 
}

// yaw(Counter ClockWise)
void motorSpeed_update(int motorSpeed) {
  analogWrite(frontLeft, motorSpeed);
  analogWrite(frontRight, 0);
  analogWrite(rearRight, motorSpeed);
  analogWrite(rearLeft, 0); 
}
