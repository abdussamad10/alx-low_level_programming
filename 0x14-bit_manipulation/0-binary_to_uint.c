#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int c = 0;

	if (!b)
		return (0);

	for (; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		c <<= 1;
		if (b[a] == '1')
			c += 1;
	}
	return (c);
}
