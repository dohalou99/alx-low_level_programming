#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry point
 * @d: the input structure at the function
 * @name: the input string
 * @age: the input number for main
 * @owner: the input string for main
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
