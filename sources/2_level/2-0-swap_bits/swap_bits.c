/*****************************************************************************
**  Swaping bits on an octet (octet means 8 bits or 1 byte)
******************************************************************************
*/
/*
** Assignment name  : swap_bits
** Expected files   : swap_bits.c
** Allowed functions:
** --------------------------------------------------------------------------------
** 
** Write a function that takes a byte, swaps its halves (like the example) and
** returns the result.
** 
** Your function must be declared as follows:
** 
** unsigned char	swap_bits(unsigned char octet);
** 
** Example:
** 
**   1 byte
** _____________
**  0100 | 0001
**      \ /
**      / \
**  0001 | 0100
*/
/*
** The formula swaps 4 by 4 by applying masks:
** (octet & 0xF0) >> 4 applies a mask to the higher 4 bits
** (0xF0 == 1111 0000) then move them to the right.
** (octet & 0x0F) << 4 applies a mask to the lowest 4 bits
** (0x0F == 0000 1111) then move them to the left.
**
** if you had byte octet equal to 0111 0100 ('t') it will gradually 
** becomes:  0100  0111  ('G')
*/

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	octet = (octet & 0xF0) >> 4 | (octet & 0x0F) << 4;
	return (octet);
}

int				main(void)
{
	unsigned char	c;

	c = 65;
	printf("%d\n", c);
	c = swap_bits(c);
	printf("%d\n", c);

	return (0);
}
