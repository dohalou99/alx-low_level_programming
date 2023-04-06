#include"main.h"

/**
 *_print_rev_recursion - print the string in reverse
 *@s : the input string
 *
 *return : always 0 (success)
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);
	}
}
