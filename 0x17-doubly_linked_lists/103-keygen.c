#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * findLargestNumber - Finds the largest ASCII value in the username.
 *
 * @username: The username string.
 * @length: Length of the username string.
 *
 * Return: The largest number.
 */
int findLargestNumber(char *username, int length)
{
	int ch;
	int vch;
	unsigned int randNum;

	ch = *username;
	vch = 0;

	while (vch < length)
	{
		if (ch < username[vch])
			ch = username[vch];
		vch += 1;
	}

	srand(ch ^ 14);
	randNum = rand();

	return (randNum & 63);
}

/**
 * multiplyUsernameChars - Multiplies each character of the username.
 *
 * @username: The username string.
 * @length: Length of the username string.
 *
 * Return: The multiplied character.
 */
int multiplyUsernameChars(char *username, int length)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < length)
	{
		ch = ch + username[vch] * username[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * generateRandomChar - Generates a random character based on username.
 *
 * @username: The username string.
 *
 * Return: A random character.
 */
int generateRandomChar(char *username)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < *username)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };

	(void)argc;

	for (length = 0; argv[1][length]; length++)
		;

	keygen[0] = ((char *)alph)[(length ^ 59) & 63];

	ch = vch = 0;
	while (vch < length)
	{
		ch = ch + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];

	ch = 1;
	vch = 0;
	while (vch < length)
	{
		ch = argv[1][vch] * ch;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	keygen[3] = ((char *)alph)[findLargestNumber(argv[1], length)];
	keygen[4] = ((char *)alph)[multiplyUsernameChars(argv[1], length)];
	keygen[5] = ((char *)alph)[generateRandomChar(argv[1])];
	keygen[6] = '\0';
	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	printf("\n");
	return (0);
}

