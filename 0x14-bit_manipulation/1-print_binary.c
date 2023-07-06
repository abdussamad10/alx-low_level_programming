#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: binary representation of a number.
 */

void print_binary(unsigned long int n)
{
	unsigned long int a = n;
	int b = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (; (a <<= 1) > 0; b++);

	for (; b >= 0; c++)
	{
		if ((n >> b) & 1)
			printf("1");

		else
			printf("0");
	}
}
