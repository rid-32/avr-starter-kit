#define F_CPU 12000000L

#ifndef __AVR_ATmega32__
#define __AVR_ATmega32__
#endif

#include "settings.h"
#include <Led.hpp>
#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>

led::Led Led(&LED_PORT, LED_PIN);

int main() {
  while (true) {
    Led.toggle();

    _delay_ms(500);
  }
}
