#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one char
 * @s2: input two char
 * Rutern: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *c;

	int i, j;
	i = 0;
	j = 0;

	if (s1 == NULL)

		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
        j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;
	c = malloc(sizeof(char) * (i + j + 1));

	if (c == NULL)
		return (NULL);
	i = 0;
        j = 0;

	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		c[i] = s2[j];
		i++, j++;

	}
	c[i] = '\0';

	return (c);
}
