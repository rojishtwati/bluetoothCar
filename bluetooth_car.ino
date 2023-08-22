int ledFront = 2;
int ledBack = 4;
int extra = 10;
int pwm1 = 5;
int pwm2 = 3;
int motor1 = 6;   //control pin for first motor
int motor2 = 7;   //control pin for first motor
int motor3 = 11;  //control pin for second motor
int motor4 = 12;  //control pin for second motor
char data = 0;
int motorspeed = 0;
void setup() {
  pinMode(ledFront, OUTPUT);
  pinMode(ledBack, OUTPUT);
  pinMode(extra, OUTPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor3, OUTPUT);
  pinMode(motor4, OUTPUT);
  pinMode(pwm1, OUTPUT);
  pinMode(pwm1, OUTPUT);
  pinMode(8, OUTPUT); //buzzer pin
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {
    data = Serial.read();
    Serial.println(data);

    //  motorspeed=map(motorspeed,0,9,0,255);
    /* if (data=='0') {
      analogWrite(pwm1,0);
      analogWrite(pwm2,0);}     
     if (data=='1') {
      analogWrite(pwm1,25.5);
      analogWrite(pwm2,25.5);}
      if (data=='2') {
      analogWrite(pwm1,51);
      analogWrite(pwm2,51);}
      if (data=='3') {
      analogWrite(pwm1,76.5);
      analogWrite(pwm2,76.5);}
      if (data=='4') {
      analogWrite(pwm1,102);
      analogWrite(pwm2,102);}
      if (data=='5') {
      analogWrite(pwm1,127.5);
      analogWrite(pwm2,127.5);}
      if (data=='6') {
      analogWrite(pwm1,153);
      analogWrite(pwm2,153);}
      if (data=='7') {
      analogWrite(pwm1,178.5);
      analogWrite(pwm2,178.5);}
      if (data=='8') {
      analogWrite(pwm1,204);
      analogWrite(pwm2,204);}
      if (data=='0') {
      analogWrite(pwm1,229.5);
      analogWrite(pwm2,22.9);}
      if (data=='q') {
      analogWrite(pwm1,255);
      analogWrite(pwm2,255);}
    */

    if (data == 'F') {
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, HIGH);
      digitalWrite(motor4, LOW);
    } else if (data == 'B') {
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, LOW);
      digitalWrite(motor4, HIGH);
    } else if (data == 'R') {
      digitalWrite(motor1, HIGH);
      digitalWrite(motor2, LOW);
    } else if (data == 'L') {
      digitalWrite(motor3, HIGH);
      digitalWrite(motor4, LOW);
    } else if (data == 'G') {
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, HIGH);
      digitalWrite(motor3, HIGH);
      digitalWrite(motor4, LOW);
    } else if (data == 'I') {
      digitalWrite(motor2, LOW);
      digitalWrite(motor1, HIGH);
      digitalWrite(motor4, HIGH);
      digitalWrite(motor3, LOW);
    } else if (data == 'V') {
      tone(8, 1000);
    } else if (data == 'v') {
      noTone(8);
    }

    else if (data == 'W') {
      digitalWrite(ledFront, HIGH);
    } else if (data == 'w') {
      digitalWrite(ledFront, LOW);
    } else if (data == 'U') {
      digitalWrite(ledBack, HIGH);
    } else if (data == 'u') {
      digitalWrite(ledBack, LOW);
    } else if (data == 'S') {
      digitalWrite(motor1, LOW);
      digitalWrite(motor2, LOW);
      digitalWrite(motor3, LOW);
      digitalWrite(motor4, LOW);
    }
  }
}