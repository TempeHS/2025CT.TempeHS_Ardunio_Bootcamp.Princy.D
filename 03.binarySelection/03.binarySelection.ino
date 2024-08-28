/*  Author: Princy Dumais - 19/08/24

  Learning Intention:
  The students understand binary selection logic and apply it to a simple control structures.
  
  Success Criteria:
    1.  I understand binary selection is asking questions that only have a true and false outcome
    2.  I can apply different comparison operators to get a desired outcome in a basic if else
        control structure 
    3.  I understand 'if', 'if else', and 'if else if else'
    4.  I understand the difference between a 'nested if', and using boolean operators
    5.  I can read a simple logic flowchart

  Student Notes:  if (digitalRead(buttonPin) == LOW) 
  if (COMMAND(PIN) == STATE)
  IF STATEMENTS DO NOT END WITH (;)
  Comparison Operators
    - != (not equal to)
    - < (less than)
    - <= (less than or equal to)
    - == (equal to)
    - > (greater than)
    - >= (greater than or equal to)

    Boolean Operators
    - ! (logical not)
    - && (logical and)
    - || (logical or)


  Documentation: 
    https://www.arduino.cc/reference/en/#structure
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/03.binarySelection/Readme.md

*/

 static unsigned int ledPin = 6;
static unsigned int buttonPin = 5;
static unsigned int lineSensorPin = 7;
bool readPin;
bool writeValue;

void setup() {
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
pinMode(lineSensorPin, INPUT);
Serial.begin(9600);
Serial.println("Debugged");
}

void loop() 
{
  Serial.println(analogRead(A3));
 if (analogRead(A3) == 0)
 {
  digitalWrite(ledPin, HIGH);
 } else if (analogRead(A3) >= 300)
 {

digitalWrite (ledPin, LOW);
} else if (analogRead(A3) >= 700)
{
  digitalWrite(ledPin, HIGH);
 } else 
 {
  digitalWrite(ledPin, LOW);
 }
 }

 
 
 
 
 
 /*
  // if (digitalRead(buttonPin) == LOW && digitalRead(lineSensorPin))
 //(digitalRead(buttonPin) + digitalRead(lineSensorPin) == 1)
 IF ELSE EXAMPLE
 {
 if (digitalRead(buttonPin) == LOW)
 {
  digitalWrite(ledPin, HIGH);
  delay(50);
 } else
 {
digitalWrite (ledPin, LOW);
 }
} 
*/
  // readPin = digitalRead(buttonPin);
  // digitalWrite(ledPin, writeValue);
// Serial.print("led-value:");
//  Serial.print(digitalRead(readPin));
//  Serial.print(",");
// Serial.print("buttonvalue:");
//  Serial.println(digitalRead(!readPin));
