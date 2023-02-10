#include "main.h"

/**
 *append_text_to_file - Function that appends text at the end of a file.
 *@filename: Name of file
 *@text_content: Content to add to file
 *
 *Return: On success (1) or -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < -1)
		return (-1);
	if (text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content)) < 0)
			return (-1);
	}

	close(fd);
	return (1);
}
