#include "main.h"
#include <stdlib.h>

/**
 * create_file - that creates a file.
 * @filename: pointer
 * @text_content - pointer
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, a = 0;

	if (filename == NULL)
		return (0);

	if (text_content != NULL)
	{
		for (a = 0; text_content[a])
			a++;
	}

	op = open(filename, O_CREAT | O_RDWR| O_TRUNC, 0600);
	wr = write(op, text_content, a);
	
	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
