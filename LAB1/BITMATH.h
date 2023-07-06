/*
 * BITMATH.h
 *
 *  Created on: Jul 6, 2023
 *      Author: mr hendy
 */

#ifndef BITMATH_H_
#define BITMATH_H_
#define BIT_SET(byte, bit) (byte |= (1 << bit))
#define BIT_CLEAR(byte, bit) (byte &= ~(1 << bit))
#define BIT_TOGGLE(byte, bit) (byte ^= (1 << bit))

#endif /* BITMATH_H_ */
