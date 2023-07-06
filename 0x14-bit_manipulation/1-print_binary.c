#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary
 * representation of a number.
 * @n: binary representation of a number.
 */

void print_binary(unsigned long int n)
{
	unsigned long int a;
	int b;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (a = n, b = 0; (a >>= 1) > 0; b++)
		;

	for (; b >= 0; b--)
	{
		if ((n >> b) & 1)
			printf("1");

		else
			printf("0");
	}
}
