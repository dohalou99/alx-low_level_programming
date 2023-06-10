#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: the input string
 * Return: length
 */
int _strlen(char *s)
{
	int loni = 0;

	while (*s != '\0')
	{
		loni++;
		s++;
	}
	return (loni);
}

