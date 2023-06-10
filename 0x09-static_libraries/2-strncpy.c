#include "main.h"
/**
 * _strncpy - function that copy a string
 * @dest: the input value
 * @src: the input value
 * @n: the input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;


	l = 0;
	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}


	return (dest);
}

