#include "Arduino.h"
#include "Car.h"

Car::Car(int pinRed, int pinYellow, int pinGreen) {
  _pinRed = pinRed;
  _pinYellow = pinYellow;
  _pinGreen = pinGreen;

  pinMode(_pinRed, OUTPUT);
  pinMode(_pinYellow, OUTPUT);
  pinMode(_pinGreen, OUTPUT);
}

void Car::enableRed() {
  pinEnable(_pinRed);
}

void Car::disableRed() {
  pinDisable(_pinRed);
}

void Car::enableYellow() {
  pinEnable(_pinYellow);  
}

void Car::disableYellow() {
  pinDisable(_pinYellow);
}

void Car::enableGreen() {
  pinEnable(_pinGreen);
}

void Car::disableGreen() {
  pinDisable(_pinGreen);
}

void Car::pinEnable(int pin) {
  digitalWrite(pin, HIGH);
}

void Car::pinDisable(int pin) {
  digitalWrite(pin, LOW);
}

