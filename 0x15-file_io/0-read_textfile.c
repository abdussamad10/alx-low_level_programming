#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: pointer
 * @litters: number
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *d;

	if (filename == NULL)
		return (0);

	d = malloc(sizeof(char) * letters);
	if (d == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(open, d, letters);
	write = write(STDOUT_FILENO, d, read);

	if (open == -1 || read = -1 || write == -1 || write != read)
	{
		free(d);
		return (0);
	}
	free(d);
	close(open);

	return (write);
}
