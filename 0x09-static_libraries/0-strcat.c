#include "main.h"
/**
*_strcat - Write a function that concatenates two strings.
*@dest : input value
*@src : input value
*
*Return:void
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int l;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	l = 0;
	while (src[l] != '\0')
	{
	dest[i] = src[l];
	i++;
	l++;
	}

	dest[i] = '\0';
	return (dest);
}
