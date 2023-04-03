#include <stdio.h>
#include "main.h"
/**
 * _memset - that fills memory with a constant byte
 * @s: the memory area pointed
 * @b: the constant char byte
 * @n: bytes of the memory
 *
 * return: the pointed to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
