#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int J;

	J = 0;
	while (n[J] != '\0')
	{
		if (n[J] >= 'a' && n[J] <= 'A')
			n[J] = n[J] - 20;
		J++;
	}
	return (n);
}
