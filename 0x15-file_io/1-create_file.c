#include "main.h"

/**
 *create_file - Function that creates a file
 *@filename: Name of file to be created
 *@text_content: Contents to be added to file
 *
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content)) < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
