#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index of the bit
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	a = 1 << index;
	*n = *n | a;

	return (1);
}
