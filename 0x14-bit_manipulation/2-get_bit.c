#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index: index of thebit
 * @n: number
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a, b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	b = n & a;

	if (a == b)
		return (1);

	return (0);
}
