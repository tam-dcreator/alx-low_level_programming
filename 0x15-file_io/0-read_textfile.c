#include "main.h"

/**
 *read_textfile - Function that reads a text file and prints it to stdout
 *@filename: Name of file to read
 *@letters: Number of letters to read
 *
 *Return: Actual number of letters read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, read_count, count = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp < 0)
		return (0);

	buf = calloc(sizeof(buf), letters);

	if (buf == NULL)
		return (0);

	read_count = read(fp, buf, letters);

	count = write(STDOUT_FILENO, buf, read_count);

	close(fp);
	free(buf);
	return (count);
}
