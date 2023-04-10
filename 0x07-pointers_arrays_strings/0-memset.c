#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte
 * @s: the pointed memory area
 * @b: the constant byte
 * @n: the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
