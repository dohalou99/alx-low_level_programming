#include"main.h"

/**
  *_puts_recursion - Write a function that prints a string
  *
  *@s : the input string
  *
  *return : Always 0 (success)
  */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
