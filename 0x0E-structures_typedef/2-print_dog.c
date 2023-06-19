#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - function that prints a struct dog
* @d: the input printed structure
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name == NULL)
	d->name = "(ben)";
	if (d->owner == NULL)
	d->owner = "(ben)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}


