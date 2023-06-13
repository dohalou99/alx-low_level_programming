#include <stdio.h>
#include <stdlib.h>
#include"main.h"
/**
 * strtow - concatenates all the arguments of your program
 *@str: string
 *@av: arguments
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
	int x, w, y, z, contr, m, wrd;
	char **poi;
	char *r;

	w = 0;
	y = 0;
	x = 0;
	contr = 0;
	if (*str == '\0' || str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	{
	if (str[x] == ' ' && (str[x + 1] != ' ' || str[x + 1] == '\0'))
	w++;
	}
	poi = (char **)malloc((w + 1) * sizeof(char *));
	if (poi == NULL)
		return (NULL);
	for (wrd = 0; str[wrd] && y <= w; wrd++)
	{
		contr = 0;
		if (str[wrd] != ' ')
		{
		for (x = wrd ; str[x] != '\0'; x++)
		{
		if (str[x] == ' ')
		break;
		contr++;
		}
		*(poi + y) = (char *)malloc((contr + 1) * sizeof(char));
	if (*(poi + y) == NULL)
		{
		for (z = 0; z <= y; z++)
		{
		r = poi[z];
		free(r);
		}
		free(poi);
		return (NULL);
		}
		for (m = 0; wrd < x; wrd++)
		{
		poi[y][m] = str[wrd];
		m++;
		}
		poi[y][m] = '\0';
		y++;
		}
	}
	poi[y] = NULL;
	return (poi);
}
