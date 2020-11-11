#define F_CPU 12000000L

#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>

int main() {
  DDRD = 0x04;
  PORTD = 0x00;

  while (true) {
    PORTD ^= 0x04;

    _delay_ms(500);
  }
}
