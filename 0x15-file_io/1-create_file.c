#include "main.h"
#include <string.h>

/**
 * create_file - create a file
 * @filename: name of the file to be created
 * @text_content: the content to be written to the file
 * Return: on success return 1 else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	int len = 0;

	int byte;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		text_content[len] = '\0';
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0666);

	if (fd == -1)
	{
		return (-1);
	}

	byte = write(fd, text_content, len);

	if (byte == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
