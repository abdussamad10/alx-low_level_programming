#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name -  function that prints a name.
 * @f: pointer to fiction
 * @name: strung
 * Rutern: 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
