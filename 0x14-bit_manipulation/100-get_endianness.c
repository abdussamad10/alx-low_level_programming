#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks if the system is big endian or little endian
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)

{
	int num;
	char *adrs;

	num = 2;
	adrs = (char *)&num;
	if (*adrs)
		return (1);
	return (0);
}
