#include "main.h"
/**
 * _memset - _memset - fills memory with the constante bytes
 * @s: the pointer of the constante bytes
 * @b: constante bytes
 * @n: numbers of bytes
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}

