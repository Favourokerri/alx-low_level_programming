#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_name_lower - prints name in lowercase
 * @name: name to be printed
 */

void print_name_lower(char *name)
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(tolower(name[i]));
	}
}

/**
 * print_name_upper - print name in upper case
 * @name: name to be printed
 */

void print_name_upper(char *name)
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(toupper(name[i]));
	}
}

