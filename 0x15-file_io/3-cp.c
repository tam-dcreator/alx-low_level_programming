#include "main.h"

/**
 *main - Entry point for code that copies from one file to another
 *@argc: Argument counter
 *@argv: Pointer array to stdin characters
 *
 *Return: On error 1, 97, 98, 99, 100, on success (0).
 */
int main(int argc, char *argv[])
{
	int fdf, fdt, count, read_count, buf_size = 1024;
	char *buf;

	if (argc != 3)
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]), exit(97);
	fdf = open(argv[1], O_RDONLY, 0);

	if (fdf < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdt = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fdt < 0)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);

	buf = calloc(sizeof(buf), buf_size);
	if (buf == NULL)
		return (1);
	while ((read_count = read(fdf, buf, buf_size)) > 0)
	{
		count = write(fdt, buf, read_count);

		if (count < 0)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	free(buf);

	if (read_count < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fdf) != 0)
		dprintf(2, "Error: Can't close fd %d\n", fdf), exit(100);
	if (close(fdt) != 0)
		dprintf(2, "Error: Can't close fd %d\n", fdt), exit(100);

	return (0);
}
