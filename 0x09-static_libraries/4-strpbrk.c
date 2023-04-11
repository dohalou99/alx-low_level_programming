#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the input string
 * @accept: the second input string
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
		unsigned int j;

		while (*s)
		{
			for (j = 0; accept[j]; j++)
			{
			if (*s == accept[j])
			return (s);
			}
		s++;
		}

	return ('\0');
}
