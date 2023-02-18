#include <stdio.h>
/**
 * main - A programm that prints both lower and upper case
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	char C;

	c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}

	C = 'A';
		while (c <= 'Z')
		{
			putchar(C);
			C++;
		}
	putchar('\n');
	return (0);
}
