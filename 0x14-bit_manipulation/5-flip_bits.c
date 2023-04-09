#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need t
 *	o flip to get from one number to another.
 * @n: The number.
 * @m: The number to flip/
 *
 * Return: number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bits = 0;

	while (flip > 0)
	{
		bits += (flip & 1);
		flip >>= 1;
	}

	return (bits);
}
