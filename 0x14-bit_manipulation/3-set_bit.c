#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: pointer to the bit.
 * @index: the index of the value
 *
 * Return: on failure -1.
 *         Otherwise 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
