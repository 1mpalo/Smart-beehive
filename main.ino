#include<SevSeg.h> 
#include <microDS18B20.h> 
#include <Servo.h> 
long int Time;
long int oneSec = 1000;
unsigned long myTime;
int pinA = 2, pinB = 3, pinC = 4, pinD = 5, pinE = 6, pinF = 7, pinG = 8, pinDP = 10, digit1 = A1, digit2 = A2, digit3 = A3, digit4 = A4;  // display oins
int scet = 0; // counter
MicroDS18B20<11> sensor; 
Servo servo;
bool isTurned_flag = 0; // flag which is checking turning state of servo
void setup() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);      //  setting display pins as outputs
  pinMode(pinG, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
  pinMode(digit3, OUTPUT);
  pinMode(digit4, OUTPUT);
  //Serial.begin(9600); turning in COM3 on 9600 bods
  servo.attach(9);
  servo.write(0);// setting servo at 0 degree
  delay(500);
  sensor.requestTemp(); // requesting temp
  Time = oneSec;
}

void loop() {
  long int mytime = myTime;
  myTime = millis();
  if (Time - mytime < 0)  //every second goes here
  {
    // requesting temp
    sensor.requestTemp();
    Time += oneSec;

    if (sensor. readTemp() && sensor.getTemp() >= 26 && !isTurned_flag)
    {
      isTurned_flag = 1;
      servo.write(90);
    }

    if (sensor.readTemp() && (sensor.getTemp()) <= 24 && isTurned_flag)
    {
      isTurned_flag = 0;
      servo.write(0);
    }
  }
 double temperature = sensor.getTemp(); 
  
    int firstDigit = floor(temperature / 10);
                                              //saving the first and the second digit of temperature
    int secondDigit = (int)temperature % 10;

  if(floor(sensor.getTemp()) > 10)
  {
   if(firstDigit == 1)
   {
    Digit1(); one(); delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
   }
   else if(firstDigit == 2)
   {
    Digit1(); two(); delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
   }
   else if(firstDigit == 3)
   {
    Digit1(); three(); delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
   }
   else if(firstDigit == 4)
   {
    Digit1(); four(); delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
   }
   else if(firstDigit == 5)
   {
    Digit1(); five(); delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
   }
   else if(firstDigit == 6)
   {
    Digit1(); six(); delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
   }
   else if(firstDigit == 7)
   {
    Digit1(); seven(); delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
   }
   else if(firstDigit == 8)
   {
    Digit1(); eight(); delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
   }
   else if(firstDigit == 9)
   {
    Digit1(); nine(); delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
   }
   if(secondDigit == 0){
    Digit2();zero();delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
    }
    else if(secondDigit == 1){
    Digit2();one();delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
    }
    else if(secondDigit == 2){
    Digit2();two();delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
    }
    else if(secondDigit == 3){
    Digit2();three();delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
    }
    else if(secondDigit == 4){
    Digit2();four();delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
    }
    else if(secondDigit == 5){
    Digit2();five();delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
    }
    else if(secondDigit == 6){
    Digit2();six();delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
    }
    else if(secondDigit == 7){
    Digit2();seven();delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
    }
    else if(secondDigit == 8){
    Digit2();eight();delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
    }
    else if(secondDigit == 9){
    Digit2();nine();delay(5);
    Digit3(); degree(); delay(5);
    Digit4(); celsium();
    }
  }
  //Serial.print(sensor.getTemp());  // print temperature data
  //Serial.print(" "); Serial.print(isTurned_flag); // print the state of flaps(1 is open, 0 is closed)
  //Serial.print(" "); Serial.print(firstDigit);  // print the first digit of temperature
  //Serial.print(" "); Serial.print(secondDigit); // print the second digit of temperature
  //Serial.print(" "); Serial.print(myTime ); //elapsed time since the start of the program
}

void zero()
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);      //a function for printing 0 on siplay
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  digitalWrite(pinDP, LOW);
}

void one()
{
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);    //a function for printing 1 on siplay
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinDP, LOW);
}

void two()
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);     //a function for printing 2 on siplay
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
}

void three()
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);      //a function for printing 3 on siplay
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
}

void four()
{
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);        //a function for printing 4 on siplay
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);

}

void five()
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);      //a function for printing 5 on siplay
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
}

void six()
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);        //a function for printing 6 on siplay
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
}

void seven()
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);        //a function for printing 7 on siplay      
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinDP, LOW);

}

void eight()
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);      //a function for printing 8 on siplay
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
}

void nine()
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);      
  digitalWrite(pinE, LOW);        //a function for printing 9 on siplay
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
}

void degree()
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);        //a function for printing degree ° on siplay
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinDP, LOW);
}

void celsium()
{
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);    //a function for printing C on siplay
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  digitalWrite(pinDP, LOW);
}

void dot()
{
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);   //a function for printing dot . on siplay 
  digitalWrite(pinF, LOW);    //it isn`t used in this project but may be useful if you want to print exact temperature
  digitalWrite(pinG, LOW);
  digitalWrite(pinDP, HIGH);
}

void Digit1()
{
  digitalWrite(digit1, HIGH);
  digitalWrite(digit2, HIGH);    //a function for printing a number on place of first digit on siplay
  digitalWrite(digit3, HIGH);
  digitalWrite(digit4, LOW);
}

void Digit2()
{
  digitalWrite(digit1, HIGH);
  digitalWrite(digit2, HIGH);
  digitalWrite(digit3, LOW);    //a function for printing a number on place of second digit on siplay
  digitalWrite(digit4, HIGH);
}

void Digit3()
{
  digitalWrite(digit1, HIGH);
  digitalWrite(digit2, LOW);    //a function for printing a number on place of third digit on siplay
  digitalWrite(digit3, HIGH);
  digitalWrite(digit4, HIGH);
}

void Digit4()
{
  digitalWrite(digit1, LOW);
  digitalWrite(digit2, HIGH);
  digitalWrite(digit3, HIGH);    //a function for printing a number on place of fourth digit on siplay
  digitalWrite(digit4, HIGH);
}
