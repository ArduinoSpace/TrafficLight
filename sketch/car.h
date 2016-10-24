#ifndef Car_h
#define Car_h

#include "Arduino.h"

class Car {
  
  public:
    Car(int pinRed, int pinYellow, int pinGreen);
    
    void enableRed();
    void disableRed();
    void enableYellow();
    void disableYellow();
    void enableGreen();
    void disableGreen();
    
  private:
    int _pinRed;
    int _pinYellow;
    int _pinGreen;

    void pinEnable(int pin);
    void pinDisable(int pin);
};

#endif
