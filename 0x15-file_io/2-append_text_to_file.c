#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name
 * @text_content: The string to add
 * Return: If the function fails or filename is NULl -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, a = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (a = 0; text_content[a];)
			a++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, a);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
