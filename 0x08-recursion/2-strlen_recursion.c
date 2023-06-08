#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: The input string
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (0);
}
