#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Write a function that prints a name
 * @name: the input added string
 * @f: the input pointer
 * Return: no return
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
