#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the input string 1
 * @s2: the input string 2
 * @n: the input number
 *
 * Return: input pointer to allocated memory block.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int x = 0, y = 0, lenght1 = 0, lenght2 = 0;

	while (s1 && s1[lenght1])
		lenght1++;
	while (s2 && s2[lenght2])
		lenght2++;

	if (n < lenght2)
		r = malloc(sizeof(char) * (lenght1 + n + 1));
	else
		r = malloc(sizeof(char) * (lenght1 + lenght2 + 1));

	if (!r)
		return (NULL);

	while (x < lenght1)
	{
		r[x] = s1[x];
		x++;
	}

	while (n < lenght2 && x < (lenght1 + n))
		r[x++] = s2[y++];

	while (n >= lenght2 && x < (lenght1 + lenght2))
		r[x++] = s2[y++];

	r[x] = '\0';

	return (r);
}
