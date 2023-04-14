#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat -  a function that concatenates two strings
 * @s1: the input string to append tt
 * @s2: the input string to concatenate from
 * @n: the number of bytes from s2 to concatenate to s1
 *
 * Return: Pointer to s1, n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c1, c2, x, y;
	char *ind;

	c1 = 0;
	c2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[c1] != '\0')
		c1++;
	while (s2[c2] != '\0')
		c2++;

	if (n > c2)
	{
		n = c2;
	}
	ind = malloc(sizeof(char) * (c1 + (n + 1)));

	if (ind == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < c1; x++)
	{
		ind[x] =  s1[x];
	}

	for (y = 0; y < n; y++)
	{
		ind[x] = s2[y];
		x++;
	}
	ind[x] = '\0';
	return (ind);
}
