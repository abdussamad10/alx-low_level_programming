#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer
 * @letters: number
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *d;

	if (filename == NULL)
		return (0);

	d = malloc(sizeof(char) * letters);
	if (d == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, d, letters);
	wr = write(STDOUT_FILENO, d, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(d);
		return (0);
	}
	free(d);
	close(op);

	return (wr);
}
