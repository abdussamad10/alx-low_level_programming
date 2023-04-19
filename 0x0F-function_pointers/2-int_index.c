#include "fuction_pointers.h"
#include <stdlub.h>

/**
 * int_index - searches for an integer.
 * @array: array
 * @size: size in elemont
 * @cmp: pounter
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int u;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (u = 0; u < size; u++)
	{
		if (cmp(array[u]))
			return (u);
	}
	return (-1);
}
