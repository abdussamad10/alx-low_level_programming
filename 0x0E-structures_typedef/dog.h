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
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
