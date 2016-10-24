#include "Arduino.h"
#include "people.h"

People::People(int pinRed, int pinGreen) {
  _pinRed = pinRed;
  _pinGreen = pinGreen;

  pinMode(_pinRed, OUTPUT);
  pinMode(_pinGreen, OUTPUT);
}

void People::enableRed() {
  pinEnable(_pinRed);
}

void People::disableRed() {
  pinDisable(_pinRed);
}

void People::enableGreen() {
  pinEnable(_pinGreen);
}

void People::disableGreen() {
  pinDisable(_pinGreen);
}

void People::pinEnable(int pin) {
  digitalWrite(pin, HIGH);
}

void People::pinDisable(int pin) {
  digitalWrite(pin, LOW);
}

