#include "main.h"
/**
 * _atoi - func that convert a string into an integer.
 *
 * @s: the input string to use.
 *
 * Return: the integer.
 */
int _atoi(char *s)
{
 	int sint = 1, x = 0;
 	unsigned int rest = 0;


 	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
 	{
 		if (s[x] == '-')
 			sint *= -1;
 		x++;
 	}
 	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
 	{
 		rest = (rest * 10) + (s[x] - '0');
 		x++;
 	}
 	rest *= sint;
 	return (rest);
 }

