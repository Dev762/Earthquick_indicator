
/*
 ADXL3xx

 Reads an Analog Devices ADXL3xx accelerometer and communicates the
 acceleration to the computer.  The pins used are designed to be easily
 compatible with the breakout boards from Sparkfun, available from:
 http://www.sparkfun.com/commerce/categories.php?c=80

 http://www.arduino.cc/en/Tutorial/ADXL3xx

 The circuit:
  analog 2: z-axis
 analog 1: y-axis
 analog 0: x-axis

 LED pin 13
 Buzzer pin 7
*/

// these constants describe the pins. They won't change:
const int xpin = A1;                  // x-axis of the accelerometer
const int ypin = A2;                  // y-axis
const int zpin = A3;                  // z-axis (only on 3-axis models)

#define led 13
#define buzzer 7
int x,y,z;
void setup() {
  // initialize the serial communications:
  Serial.begin(9600);

  // Provide ground and power by using the analog inputs as normal
  // digital pins.  This makes it possible to directly connect the
  // breakout board to the Arduino.  If you use the normal 5V and
  // GND pins on the Arduino, you can remove these lines.
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  x = analogRead(xpin);
  y = analogRead(ypin);
  z = analogRead(zpin);
  // print the sensor values:
  Serial.print(analogRead(xpin));
  // print a tab between values:
  Serial.print("\t");
  Serial.print(analogRead(ypin));
  // print a tab between values:
  Serial.print("\t");
  Serial.print(analogRead(zpin));
  Serial.println();

  if((x>340 || x <330) && (y>352 || y <340) && (z <265 || z >275))
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    delay(100);
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }
  
  // delay before next reading:
  delay(100);
}
