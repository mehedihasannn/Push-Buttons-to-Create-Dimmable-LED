int buttonPin1 =12;
int buttonPin2=11;
int buttonVal1;
int buttonVal2;
int dt=250;
int LEDbright=0;
int LEDPin=3;
int buzzPin=2;
int dt2=500;





void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal1=digitalRead(buttonPin1);
  buttonVal2=digitalRead(buttonPin2);
  Serial.print("Button 1= ");
  Serial.print(buttonVal1);
  Serial.print(",");
  Serial.print("Button 2= ");
  Serial.print(buttonVal2);
  Serial.println(",");
  delay(dt);

if (buttonVal1==0)
{
  LEDbright=LEDbright +5;

}
if (buttonVal2==0)

{
  LEDbright=LEDbright-5;
}
if(LEDbright>255)
{
  LEDbright=255;
  digitalWrite(buzzPin, HIGH);
  delay(dt2);
  digitalWrite(buzzPin, LOW);
}
if(LEDbright<0)
{
  LEDbright=0;
  digitalWrite(buzzPin, HIGH);
  delay(dt2);
  digitalWrite(buzzPin, LOW);
}
  analogWrite(LEDPin, LEDbright);

}
