#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Write a function that creates a new dog
 * @name: the input name of dog
 * @age: the input age of dog
 * @owner: the input owner of the dog
 * Return: pointer of struct newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	/* reserving memory to struct*/
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	/* Cpunting name pointer*/
	if (name == NULL)
	{
		free(newdog);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(newdog);
		free(name);
		return (NULL);
	}
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
