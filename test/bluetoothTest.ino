//BLE Terminal을 사용합니다. 아랫쪽 Btn1~5까지의 버튼에 CR, LF의 체크를 해제해야 정확한 데이터가 전송됩니다. 

char val;

void setup() {
  Serial.begin(9600);     // MPU 와  PC 간의 통신속도 
  Serial1.begin(115200);  // MPU 와  블루투스간의 통신 속도 
}

void loop() {
  // Serial –> Data –> Serial1
  if (Serial.available()) {
    val = Serial.read();
    Serial.print("send = ");
    Serial.write(val);
    Serial.println();
    
    Serial1.print("receive = ");
    Serial1.write(val);
    Serial1.println();
  }
  
  // Serial1 –> Data –> Serial
  if (Serial1.available()) {
    val = Serial1.read();
    Serial1.print("send = ");
    Serial1.write(val);
    Serial1.println();
    
    Serial.print("receive = ");
    Serial.write(val);
    Serial.println();
  }
}
