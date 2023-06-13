#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the input int
 *
 * Return: the char pointer
 */

char *_strdup(char *str)
{
	unsigned int cont1, cont2;
	char *string;

	cont1 = 0;
	cont2 = 0;
	if (str == NULL)
	{
		return (0);
	}

	while (str[cont1] != '\0')
	{
		cont1++;
	}

	string = malloc(sizeof(char) * (cont1 + 1));

	if (string == NULL)
	{
		return (NULL);
	}

	while (cont2 < cont1)
	{
		string[cont2] = str[cont2];
		cont2++;
	}

	string[cont2] = '\0';

	return (string);
}
