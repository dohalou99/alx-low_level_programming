#include "main.h"

/**
 *_memcpy - Write a function that copies memory area
 *@dest: the stored memory
 *@src: the memory where is copied
 *@n: number of byte from memory area
 *
 *Return: copied memory with n bytes dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int j = n;

	for (j = 0; k < j; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
