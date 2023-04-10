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
	unsigned int j;

	for (j = 0; j < n; j++)
	*(dest + j) =  *(src + j);
	return (dest);
}
