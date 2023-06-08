#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string
 * @s: the input string
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}

	else
		_putchar('\n');
}

