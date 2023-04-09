#include "main.h"

/**
 * get_bit - Gets the value of a bit at index.
 * @n: The bit to be printed.
 * @index: The location of the bit to be printed.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
