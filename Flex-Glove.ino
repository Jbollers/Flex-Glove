//First state your flex sensor and LEDs as constant intergers,
//as they will be continues.
const int flex1 = A0;
const int flex2 = A1;
const int flex3 = A2;
const int flex4 = A3;
const int led1 = 5;
const int led2 = 6;
const int led3 = 7;
const int led4 = 8;
const int led5 = 9;
const int led6 = 10;
const int led7 = 11;
const int led8 = 12;

void setup() {
// Set each LEDs to output
//pinMode(led1, OUTPUT);
//pinMode(led2, OUTPUT);
//pinMode(led3, OUTPUT);
//pinMode(led4, OUTPUT);
//pinMode(led5, OUTPUT);
//pinMode(led6, OUTPUT);
//pinMode(led7, OUTPUT);
//pinMode(led8, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//State the value of the sensors
  int flexval1 = analogRead(flex1);
  int flexval2 = analogRead(flex2);
  int flexval3 = analogRead(flex3);
  int flexval4 = analogRead(flex4);
//State the value of the LEDs as the range of the sensors
  int pinval1 = map(flexval1, 0, 1023, 0, 255);
  int pinval2 = map(flexval1, 0, 1023, 0, 255);
  int pinval3 = map(flexval2, 0, 1023, 0, 255);
  int pinval4 = map(flexval2, 0, 1023, 0, 255);
  int pinval5 = map(flexval3, 0, 1023, 0, 255);
  int pinval6 = map(flexval3, 0, 1023, 0, 255);
  int pinval7 = map(flexval4, 0, 1023, 0, 255);
  int pinval8 = map(flexval4, 0, 1023, 0, 255);
//Make the values of the sensor as the LEDs
  analogWrite(led1, pinval1);
  analogWrite(led2, pinval2);
  analogWrite(led3, pinval3);
  analogWrite(led4, pinval4);
  analogWrite(led5, pinval5);
  analogWrite(led6, pinval6);
  analogWrite(led7, pinval7);
  analogWrite(led8, pinval8);

//Test the code to see if it works
  Serial.print("sensor = ");
  Serial.print(flexval1);
  Serial.print("\t output = ");
  Serial.println(pinval1);
  
  delay(2);

}
