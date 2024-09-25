/*
  Author: Princy Dumais 16/09/2024
  
  Learning Intention:
  The students will learn how to wire a four pin ultrasonic sensor and configure it to measure distance using a library.
  
  Success Criteria:
    1.  I can correctly wire a 4 pin ultrasonic sensor
    2.  I understand what the trigger and echo pins do
    3.  I generally understand what a library is
    4.  I can get a distance from a untra sensor
    5.  I understand that a continuous servo speed and direction is set by a frequency signal sent from the microcontroller
    6.  I can apply this knowledge to the Ultrasonic Sensor in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.tutorialspoint.com/arduino/arduino_ultrasonic_sensor.htm <-- Ultrasonic sensor explained
    https://github.com/ErickSimoes/Ultrasonic/tree/master <-- We are using this library

  Schematic:
    https://www.tinkercad.com/things/kngLnqo2HEU?sharecode=OVpOeJsUP3bOHBkzbkWCfGcuSIswqXiISYQiG6UzotA
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/11.ultrasonicSensor/Bootcamp-ultrasonicSensor.png
*/

#include "Ultrasonic.h"
#include <Servo.h>

Servo myservo;
Ultrasonic Sensor(5);
unsigned static int servoPin = 7;
unsigned static int potpin = A2;
int LED = 2;
unsigned long LEDPreviousMillis = 0;
const unsigned long LEDinterval = 2000;
unsigned int LEDState = LOW;



void setup() {
  myservo.attach(servoPin);
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  

}


void loop() {
unsigned long currentMillis = millis();
int val = Sensor.distanceRead();

{
 if (Sensor.distanceRead() <= 10 );
digitalWrite(LED, HIGH);
}



//  digitalWrite(LED, HIGH);
// }

 Serial.println(Sensor.distanceRead());

//   int val = analogRead(potpin);
//  val = map(val, 1023, 0 , 180 , 0);
//   myservo.write(val);
}



// READ THE VALUE OF THE ULTRASOUND 


/*
{
  Serial.println(analogRead(A3));
if (unsigned long analogRead(5)) == 1;
digitalWrite (LED, HIGH);
 
 Serial.println(barotrauma.distanceRead());

  int val = analogRead(potpin);
 val = map(val, 1023, 0 , 180 , 0);
  myservo.write(val);
}
*/