#include "Digit.h";
#include "Segments.h";
 
void setup()
{
 DDRD=0xff; // pins 0-7 OUTPUT
 DDRB=0xff; // pins 8-13 OUTPUT
 PORTD=0x00; // make pins 0-7 LOW
 PORTB=0x00; // make pins 8-13 LOW
}
 
void loop()
{
  Digit(1);
  Segments(8); // Number on display 1
  delay(2);
  Digit(2);
  Segments(8); // Number on display 2
  delay(2);
  Digit(3);
  Segments(8); // Number on display 3
  delay(2);
  Digit(4);
  Segments(8); // Number on display 4
  delay(2);
}
