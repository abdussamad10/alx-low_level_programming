#include "main.h"
#include <stdio.h>

/*
 *
 * Returns a value of a given index
 * 
 * Number to check the value
 * 
 * Always Return: value at given index or -1 if an error occours
 *
 */


int get_bit(unsigned long int n, unsigned int index)

{
	unsigned int i;

	if (index > (sizeof(8) * 8))
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
