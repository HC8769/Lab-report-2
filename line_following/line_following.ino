#define I2C_SLAVE_ADDR 0x04
#include <driver/adc.h>
#include <Wire.h>
#define Apin 4
#define Bpin 5
#define Cpin 34
#define Dpin 35
#define Epin 32
#define Fpin 33
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 Wire.begin();
  pinMode(Apin, INPUT);
  pinMode(Bpin, INPUT);
  pinMode(Cpin, INPUT);
  pinMode(Dpin, INPUT);
  pinMode(Epin, INPUT);
  pinMode(Fpin, INPUT);
}

void loop() {
    // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (3.3 / 4095);
  // print out the value you read:
  Serial.println(voltage);
  
  int Aout = analogRead(Apin)*((3.3/4095.00)-3.3)*-1;
  int Bout = analogRead(Bpin)*((3.3/4095.00)-3.3)*-1;
  int Cout = analogRead(Cpin)*((3.3/4095.00)-3.3)*-1;
  int Dout = analogRead(Dpin)*((3.3/4095.00)-3.3)*-1;
  int Eout = analogRead(Epin)*((3.3/4095.00)-3.3)*-1;
  int Fout = analogRead(Fpin)*((3.3/4095.00)-3.3)*-1;

 

  delay(100);
}
 
  int sum=6;  
  int W=sum*(wi*Xi)/sum*wi;
  int error=setpoint-W;
  int u=Kp*e+Ki*sum*e+Kd(e-e*(5));
  int servoAngle=centreAngle+u;
  int leftMotorSpeed=baseSpeed+Ku;
  int rightMotorSpeed=baseSpeed-Ku;

void goForwards() {
  digitalWrite(INa, HIGH);
  digitalWrite(INb, LOW);
  digitalWrite(INc, HIGH);
  digitalWrite(INd, LOW);
}  

void stopMotors() {
  digitalWrite(INa, LOW);
  digitalWrite(INb, LOW);
  digitalWrite(INc, LOW);
  digitalWrite(INd, LOW);
}

void goBackwards() {
  digitalWrite(INa, LOW);
  digitalWrite(INb, HIGH);
  digitalWrite(INc, LOW);
  digitalWrite(INd, HIGH);
}

void goClockwise() {
  digitalWrite(INa, HIGH);
  digitalWrite(INb, LOW);
  digitalWrite(INc, LOW);
  digitalWrite(INd, HIGH);
}
