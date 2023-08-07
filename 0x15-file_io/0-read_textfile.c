#include "main.h"

/**
 * read_textfile - read a text file and print the letters.
 * @filename: filename.
 * @letters: number of letters printed.
 * Return:  the actual number of letters it could read and print,
 *    if it fails return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t Rd, Wr;
	char *buf;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	Rd = read(file, buf, letters);
	Wr = write(STDOUT_FILENO, buf, Rd);

	close(file);
	free(buf);
	return (Wr);
}
