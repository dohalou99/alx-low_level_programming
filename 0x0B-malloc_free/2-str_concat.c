#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings
 * @s1: the input string 1
 * @s2: the input string 2
 *
 * Return: string s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *r;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	r = (char *)  malloc(((i + j) + 1) * sizeof(char));

	if (r == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		r[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		r[i] = s2[j];
		i++;
	}
	return (r);
}

