#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string
 * @s: my string
 *
 * Return: The input length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (14);
}
