#define frontLeft 6
#define frontRight 10
#define rearRight 9
#define rearLeft 5

int input;
int userSpeed;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0) {
    input = Serial.read();
    if(input == 48) {
      Serial.println(userSpeed);
      userSpeed = 0;
    }
    if(input == 49) {
      Serial.println(userSpeed);
      userSpeed = 10;
    }
    if(input == 50) {
      Serial.println(userSpeed);
      userSpeed = 50;
    }
    if(input == 51) {
      Serial.println(userSpeed);
      userSpeed = 100;
    }
    if(input == 52) {
      Serial.println(userSpeed);
      userSpeed = 150;
    }
    if(input == 53) {
      Serial.println(userSpeed);
      userSpeed = 255;
    }
    motorSpeed_update(userSpeed);
  }
}

// all motor
void motorSpeed_update(int motorSpeed) {
  analogWrite(frontLeft, motorSpeed);
  analogWrite(frontRight, motorSpeed);
  analogWrite(rearRight, motorSpeed);
  analogWrite(rearLeft, motorSpeed); 
}

// // pitch(forward)
// void motorSpeed_update(int motorSpeed) {
//   analogWrite(frontLeft, 0);
//   analogWrite(frontRight, 0);
//   analogWrite(rearRight, motorSpeed);
//   analogWrite(rearLeft, motorSpeed); 
// }

// // roll(left)
// void motorSpeed_update(int motorSpeed) {
//   analogWrite(frontLeft, 0);
//   analogWrite(frontRight, motorSpeed);
//   analogWrite(rearRight, motorSpeed);
//   analogWrite(rearLeft, 0); 
// }

// // yaw(Counter ClockWise)
// void motorSpeed_update(int motorSpeed) {
//   analogWrite(frontLeft, motorSpeed);
//   analogWrite(frontRight, 0);
//   analogWrite(rearRight, motorSpeed);
//   analogWrite(rearLeft, 0); 
// }
