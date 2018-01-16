#include "DigiKeyboard.h"

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;    // the number of the pushbutton pin
const int ledPin = 1;      // the number of the LED pin

// Variables will change:
int ledState = HIGH;


void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(ledPin, ledState);
}

void loop() {
  // read the state of the switch into a local variable:
  int reading = digitalRead(buttonPin);

  if (reading==HIGH) {
    delay(10);
    if (reading==HIGH) {
      if (ledState==HIGH) {
        ledState=LOW;
      } else {
        ledState=HIGH;
      }
      digitalWrite(ledPin, ledState);
      ptMed();
      
    }
  }

}

void ptMed() {

  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,0,0);
  DigiKeyboard.sendKeyStroke(39,0,10);
  DigiKeyboard.sendKeyStroke(30,0,10);
  DigiKeyboard.sendKeyStroke(37,0,10);
  DigiKeyboard.sendKeyStroke(32,0,10);
  DigiKeyboard.sendKeyStroke(0);   
  DigiKeyboard.delay(100);
  
}


