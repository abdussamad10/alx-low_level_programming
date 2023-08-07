#include "main.h"

/**
 * append_text_to_file - append text at the end of a file.
 * @filename: it s a file name.
 * @text_content: added text.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int nbrLetters;
	int RdWr;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (nbrLetters = 0; text_content[nbrLetters]; nbrLetters++)
			;

		RdWr = write(file, text_content, nbrLetters);

		if (RdWr == -1)
			return (-1);
	}

	close(file);
	return (1);
}
