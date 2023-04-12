#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the input numbers of arguments
 * @av: the input arguments
 * Return: 0 (success)
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0, j = 0;
	char *str;

	if (ac == 0 || av == NULL)

		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		j++;
	}
	j += ac;

	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
	str[z] = av[x][y];
		z++;
	}
	if (str[z] == '\0')
	{
	str[z++] = '\n';
	}
	}
	return (str);
}
