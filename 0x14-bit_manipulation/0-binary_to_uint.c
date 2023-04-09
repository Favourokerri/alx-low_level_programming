#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @binary_string: A pointer to a string of 0 and 1 chars.
 *
 * Return: If binary_string is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *binary_string)
{
	unsigned int result = 0, multiplier = 1;
	int length;

	if (binary_string == NULL)
		return (0);

	for (length = 0; binary_string[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (binary_string[length] != '0' && binary_string[length] != '1')
			return (0);

		result += (binary_string[length] - '0') * multiplier;
		multiplier *= 2;
	}

	return (result);
}
