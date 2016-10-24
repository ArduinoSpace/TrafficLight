#ifndef People_h
#define People_h

#include "Arduino.h"

class People {
  
  public:
    People(int pinRed, int pinGreen);
    
    void enableRed();
    void disableRed();
    void enableGreen();
    void disableGreen();
    
  private:
    int _pinRed;
    int _pinGreen;

    void pinEnable(int pin);
    void pinDisable(int pin);
};

#endif
