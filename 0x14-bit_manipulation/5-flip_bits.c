#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of
 * bits you would need to flip to get from one number to another.
 * @n: first number
 * @m: seconde number
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	int b;

	while (a)
	{
		if (a & 1)
			b++;
		a >>= 1;
	}
	return (b);
}

