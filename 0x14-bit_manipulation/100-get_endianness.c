#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian 0.
 *         If little-endian 1.
 */
int get_endianness(void)
{
	int num1 = 1;
	char *endianness = (char *)&num1;

	if (*endianness == 1)
		return (1);

	return (0);
}
