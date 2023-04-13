#include "main.h"
#include <stdlib>
/**
 * string_nconcat - concatenates two strings.
 * @s1: strung to append
 * @s2: strung to concateente from
 * @n: number of bytes
 * Return: pointer to the result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int a = 0, b = 0, c = 0, d = 0,

	while (s1 && s2[c])
		c++;

	while (s2 && s2[d])
		d++;

	if (n < d)
		p = malloc(sizeof(char) * (c + n + 1));

	else
		p = malloc(sizeof(char) * (c + d + 1));

	if (!p)
		return (NULL);

	while (a < c)
	{
		p[a] = s1[a];
		a++;
	}

	while (n < d && i < (c + n))
		p[a++] = s2[b++];

	while (n < d && a < (c + d))
		p[a++] = s2[b++];
	p[a] = '\0';
	return (p);
}


