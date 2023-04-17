#ifndef DOG_h
#define DOG_h
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog
 * @age: age
 * @name: name
 * @owner: owner
 * Description: struct dog
 */

struct dog
{
	float age;
	char *name;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
