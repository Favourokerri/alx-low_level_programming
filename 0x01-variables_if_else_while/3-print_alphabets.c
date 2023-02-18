#include <stdio.h>
/**
 * main - A programm that prints both lower and upper case
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}

		while (d <= 'Z')
		{
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
