/*****************************************************************************
**  Reversing bits on an octet (octet means 8 bits or 1 byte)
******************************************************************************
*/
/*
** Assignment name  : reverse_bits
** Expected files   : reverse_bits.c
** Allowed functions:
** ---------------------------------------------------------------------------
**
** Write a function that takes a byte, reverses it, bit by bit (like the
** example) and returns the result.
**
** Your function must be declared as follows:
**
** unsigned char	reverse_bits(unsigned char octet);
**
** Example:
**
**   1 byte
** _____________
**  0100  0001
**      ||
**      \/
**  1000  0010
*/
/*
** 1) The first formula swaps 4 by 4 by applying masks:
** (octet & 0xF0) >> 4 applies a mask to the higher 4 bits
** (0xF0 == 1111 0000) then move them to the right.
** (octet & 0x0F) << 4 applies a mask to the lowest 4 bits
** (0x0F == 0000 1111) then move them to the left.
**
** 2) Now swap them 2 by 2: 0xCC = 1100 1100 and 0x33 = 0011 0011
**
** 3) Finally swap 1 by 1: 0xAA = 1010 1010 and 0x55 = 0101 0101
**
** if you had byte octet equal to 0111 0100 ('t') it will gradually 
** becomes:
** 1)   0100      0111   ('G')
** 2)  00 01     11 01   (character 29, group separator, not a printable char)
** 3) 0 0 1 0  1 1 1 0 = 0010 1110 ('.') 
*/

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	octet = (octet & 0xF0) >> 4 | (octet & 0x0F) << 4;
	octet = (octet & 0xCC) >> 2 | (octet & 0x33) << 2;
	octet = (octet & 0xAA) >> 1 | (octet & 0x55) << 1;
	return (octet);
}

int				main(void)
{
	unsigned char	c;

	c = 65;
	printf("%d\n", c); // 0100  0001
	c = reverse_bits(c);
	printf("%d\n", c); // 1000  0010

	return (0);
}
