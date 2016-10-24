#define PIN_CAR_LED_RED 13
#define PIN_CAR_LED_YELOW 12
#define PIN_CAR_LED_GREEN 11

#define PIN_PEOPLE_LED_RED 9
#define PIN_PEOPLE_LED_GREEN 8

#include "car.h"
#include "people.h"

// Data's
Car car(PIN_CAR_LED_RED, PIN_CAR_LED_YELOW, PIN_CAR_LED_GREEN);
People people(PIN_PEOPLE_LED_RED, PIN_PEOPLE_LED_GREEN);

void setup() {
  
}

void loop() {

  // Green
  people.enableRed();
  car.enableGreen();
  delay(3000);
  for(int i = 0; i <= 2; ++i) {
    car.disableGreen();
    if (i < 2) {
     delay(250);
     car.enableGreen();
     delay(250);
    }
  }

  // Yellow
  car.enableYellow();
  delay(1500);
  car.disableYellow();

  // Red
  people.disableRed();
  people.enableGreen();
  car.enableRed();
  delay(2000);
  for(int i = 0; i <= 2; ++i) {
    people.disableGreen();
    if (i < 2) {
     delay(250);
     people.enableGreen();
     delay(250);
    }
  }
  car.disableRed();   
}
