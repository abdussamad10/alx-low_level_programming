#include "main.h"

/**
 * create_file - create a file.
 * @filename: it s a file name.
 * @text_content: content writed in the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int nbrLetters;
	int Wr;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nbrLetters = 0; text_content[nbrLetters]; nbrLetters++)
		;

	Wr = write(file, text_content, nbrLetters);
	if (Wr == -1)
		return (-1);

	close(file);
	return (1);
}
