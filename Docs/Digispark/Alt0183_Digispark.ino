#include "DigiKeyboard.h"

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;    // the number of the pushbutton pin
const int ledPin = 1;      // the number of the LED pin

// Variables will change:
int ledState = HIGH;

#define KEYPAD_1                (  89  | 0xF000 )
#define KEYPAD_2                (  90  | 0xF000 )
#define KEYPAD_3                (  91  | 0xF000 )
#define KEYPAD_4                (  92  | 0xF000 )
#define KEYPAD_5                (  93  | 0xF000 )
#define KEYPAD_6                (  94  | 0xF000 )
#define KEYPAD_7                (  95  | 0xF000 )
#define KEYPAD_8                (  96  | 0xF000 )
#define KEYPAD_9                (  97  | 0xF000 )
#define KEYPAD_0                (  98  | 0xF000 )

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
  //DigiKeyboard.sendKeyPress(0,MOD_ALT_LEFT);
  DigiKeyboard.sendKeyPress(KEYPAD_0,MOD_ALT_LEFT);
  DigiKeyboard.sendKeyPress(KEYPAD_1,MOD_ALT_LEFT);
  DigiKeyboard.sendKeyPress(KEYPAD_8,MOD_ALT_LEFT);
  DigiKeyboard.sendKeyPress(KEYPAD_3,MOD_ALT_LEFT);
  DigiKeyboard.sendKeyPress(0,0);   
  DigiKeyboard.delay(100);
  
}
