#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *y;
	int j, a = 0;

	if (str == NULL)
	return (NULL);
	j = 0;

	while (str[j] != '\0')
		j++;

	y = malloc(sizeof(char) * (j + 1));
	if (y == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		y[a] = str[a];
	return (y);
}
