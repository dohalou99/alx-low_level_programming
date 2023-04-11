#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the input string
 * @c: the input character
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
