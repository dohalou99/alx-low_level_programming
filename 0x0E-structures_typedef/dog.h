#ifndef DOG_H
#define DOG_H
/**
 * struct dog - list dates about dog
 * @name: the input name
 * @age: th input age
 * @owner: dog owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog - rename the strucut with typedef
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
