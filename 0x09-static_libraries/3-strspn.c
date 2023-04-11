#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the input segment
 * @accept: consist only of bytes
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				x++;
				break;
			}
			else if (accept[j + 1] != '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
