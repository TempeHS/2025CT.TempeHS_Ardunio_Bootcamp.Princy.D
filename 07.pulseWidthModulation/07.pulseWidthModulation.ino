/*
  Author: Princy Dumais - 29/09/2024

  Learning Intention:
  The students will learn what 'pulse width modulation' is and how to use it to write
  analogue data on a digital PIN.
  
  Success Criteria:
    1.  I understand what pulse width modulation is
    2.  I can identify the PWM PINS on the Arduino Uno
    3.  I can wire an RGB LED for PWM control in TINKERCAD
    5.  I can write PWM data to multiple pins and manually change the colour of the LED

  Student Notes: 

  Documentation: 
    https://www.w3schools.com/colors/colors_rgb.aspt
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/07.pulseWidthModulation/Pulse-Width-Modulation.jpg
  Schematic:
    https://www.tinkercad.com/things/drNDsMxGMIY?sharecode=D6x4_xTTRl_zGs7B-XGqfbQhG_xgjj3TVS_c-GNTK-c
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/07.pulseWidthModulation/Bootcamp-PWMOutput.png
*/
unsigned static int gLED = 11;
unsigned static int rLED = 9;
unsigned static int bLED = 10;

void setup() 
{
  pinMode(gLED, OUTPUT);
  pinMode(rLED, OUTPUT);
  pinMode(bLED, OUTPUT);
}

void loop() {
  analogWrite(gLED, 150);
  analogWrite(rLED, 0);
  analogWrite(bLED, 255);
}



/*
int ledPin = 3;
bool readPin;


void setup() 
{
  pinMode(ledPin, OUTPUT);
Serial.begin(9600);
Serial.println("Debugged");
}

void loop() {
int val = analogRead(A3);
val = val/4;

  analogWrite(ledPin, val);
}
*/