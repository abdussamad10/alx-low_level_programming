#include "main.h"

int square(int n, int i);
/**
 * _sqrt_recursion - that returns the natural square root of a number.
 * @n: calculate the square root of a number
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 0));
}

/**
 * square - squatr root of number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: result square root
 */

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}
