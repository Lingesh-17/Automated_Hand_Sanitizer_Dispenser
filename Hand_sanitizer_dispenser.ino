int ir=3; // connect to arduino's D3
int relay=4; // connect to arduino's D4
int buzzer=5; // connect to arduino's D5
int ir_value; // variable for store ir sensor's value

void setup() {
  pinMode(ir, INPUT); // makes ir_sensor as an input device
  pinMode(relay, OUTPUT); // makes relay as an Output device
  pinMode(buzzer, OUTPUT); // makes buzzer as an Output device

  digitalWrite(relay, LOW);
  digitalWrite(buzzer, LOW);
}

void loop() {
  ir_value=digitalRead(ir); // read data from ir_sensor

  if (ir_value==0) {
    digitalWrite(relay, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1000);
    digitalWrite(relay, LOW);
    digitalWrite(buzzer, LOW);
    }

  else {
    digitalWrite(relay, LOW);
    digitalWrite(buzzer, LOW);
    }  
  
}
