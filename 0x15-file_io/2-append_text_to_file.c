#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append content to a file
 * @filename: name of the file
 * @text_content: content to be append
 * Return: return 1 on success return -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	int w;

	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	w = write(fd, text_content, len);

	if (w == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
