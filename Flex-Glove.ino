
//Constants:
//const int ledPin = 5;   //pins as PWM funtion
const int ledPin2 = 3;
//const int ledPin3 = 7;
//const int ledPin4 = 8;
const int ledPin5 = 9;
const int ledPin6 = 10;
const int ledPin7 = 11;
//const int ledPin8 = 12;
const int flexPin = A0; //pin A0-A3 to read analog input
const int flexPin2 = A1;
const int flexPin3 = A2;
const int flexPin4 = A3;

//Variables:
int value; //save analog value
int value2;
int value3;
int value4;


void setup(){
  
  //pinMode(ledPin, OUTPUT);  //Set pins as 'output'
  pinMode(ledPin2, OUTPUT);
  //pinMode(ledPin3, OUTPUT);
  //pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  //pinMode(ledPin8, OUTPUT);
  Serial.begin(9600);       //Begin serial communication

}

void loop(){
  
  value = analogRead(flexPin);         //Read and save analog value from flex sensors
  Serial.println(value);               //Print value
    value = map(value, 700, 900, 0, 255);//Map value 700-900 to 0-255 (PWM)
  //analogWrite(ledPin, value);         
  analogWrite(ledPin2, value);          //Send PWM value to led
  value2 = analogRead(flexPin2);
  Serial.println(value2);
  value2 = map(value2, 700, 900, 0, 255);
  //analogWrite(ledPin3, value2);
  analogWrite(ledPin5, value2);
  value3 = analogRead(flexPin3);
  Serial.println(value3);
  value3 = map(value3, 700, 900, 0, 255);
  //analogWrite(ledPin5, value3);
  analogWrite(ledPin6, value3);
  value4 = analogRead(flexPin4);
  Serial.println(value4);
  value4 = map(value4, 700, 900, 0, 255);
  analogWrite(ledPin7, value4);
  //analogWrite(ledPin8, value4);
  
  delay(100);                          //Small delay
  
}

