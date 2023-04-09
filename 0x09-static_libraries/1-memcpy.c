#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies memoryu arey
 * @src: source
 * @dest: desti,ation
 * @n: size of byte
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
