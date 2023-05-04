#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:  pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	int sum = strlen(b);
	unsigned int num = 0;
	int i;

	for (i = 0; i < sum; i++)
	{
		if (b[i] == '0')
		{
			num = (num << 1) | 0;
		}
		else if (b[i] == '1')
		{
			num = (num << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
