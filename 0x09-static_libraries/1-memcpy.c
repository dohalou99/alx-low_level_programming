#include "main.h"
/**
 *_memcpy - write a function that copies memory area
 *@dest: the input memory stored
 *@src: the input memory copied
 *@n: the input number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int j = n;

	for (; a < j; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

