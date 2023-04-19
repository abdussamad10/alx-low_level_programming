#include <stdlib.h>
#include "fonction_pointers.h"

/**
 * print_name -  prints a name.
 * @f: pointers to fonction
 * @name: string to ad
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	*f(name);
}
