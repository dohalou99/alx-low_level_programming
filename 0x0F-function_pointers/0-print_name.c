#include"function_pointers.h"
#include <stdio.h>

/**
 * print_name - Write a function that prints a name.
 *
 * @name: the input name
 * @f: the input pointer to the function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
