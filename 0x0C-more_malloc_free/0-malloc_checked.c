#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the input string .
 * Return: the Output.
 */
void *malloc_checked(unsigned int b)
{
	void *lc = malloc(b);

	if (lc == NULL)
	{
		exit(98);
	}
	return (lc);
}
