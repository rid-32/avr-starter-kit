#include "Led.h"

using namespace led;

Led::Led(volatile uint8_t *port, uint8_t pin) {
  this->port = port;
  this->pin = pin;

  *(port - 1) |= 1 << pin;
  *port &= ~(1 << pin);
}

void Led::toggle() { *port ^= 1 << pin; }
