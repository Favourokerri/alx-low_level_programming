# include "main.h"
/**
 * _islower - check if lowercase
 * @c: the character to be checked
 * Return: - 1 if lower, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
		else
			return (0);
}
