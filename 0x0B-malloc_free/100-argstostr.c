#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: the input int
 * @av: the input pointer
 *
 * Return: the args as strings
 */
char *argstostr(int ac, char **av)
{
	int j, m, k = 0, b = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][m]; m++)
			b++;
	}
	b += ac;
	string = malloc(sizeof(char) * b + 1);
	if (string == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
	for (m = 0; av[j][m]; m++)
	{
		string[k] = av[j][m];
		k++;
	}
	if (string[k] == '\0')
	{
	string[k++] = '\n';
	}
	}
	return (string);
}

