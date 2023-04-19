#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator -  function given as a parameter on each element of an array.
 * @array; array
 * @size: size of the array
 * @actoin; pointers to the ffinction
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a;

	if (!array && !action)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
