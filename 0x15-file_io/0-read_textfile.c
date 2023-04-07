#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and print to p0six
 * @filename: file name
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o;

	ssize_t w;

	ssize_t r;

	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
