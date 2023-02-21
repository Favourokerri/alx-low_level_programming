#include "main.h"
/**
 * _isalpha - check for alphabets
 * @c: character to be checked
 * Return: return 1 if alphabet otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (0);
}
