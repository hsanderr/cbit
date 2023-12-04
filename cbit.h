/*
  Utility to perform bit operations with 8-bit variables in C.
  Bits order: bit 0 is LSB and bit 7 is MSB.
*/

#ifndef CBIT_H
#define CBIT_H

#define MASK(b) ((unsigned char)(1 << (bit))) // bit mask, returns an 8-bit variable with only bit <b> set
#define SET_BIT(a, b) (((unsigned char)var) | MASK(bit)) // returns a copy of variable <a> with bit <b> set
#define CLEAR_BIT(a, b) (((unsigned char)var) & ~MASK(bit)) // returns a copy of variable <a> with bit <b> cleared
#define CHECK_BIT(a, b) (((unsigned char)var) & MASK(bit)) // returns a truthful value if bit <b> of variable <a> is set, otherwise returns zero
#define INVERT_BIT(a, b) (((unsigned char)var) ^ MASK(bit)) // returns a copy of variable <a> with bit <b> inverted

#endif
