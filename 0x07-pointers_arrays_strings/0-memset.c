#include "main.h"

/**
 *_memset - fills memory with the constante bytes
 *@b : input constante bytes
 *@n : input numbers of bytes
 *@s : input the pointer of the constante bytes
 *return : Return a pointer to the memory area s
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
