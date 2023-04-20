#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Write a function that prints strings
 *
 * @separator: the input string
 * @n: the input number of items
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list hee;
	char *j;
	unsigned int ind;

	va_start(hee, n);

	for (ind = 0; ind < n; ind++)
	{
		j = va_arg(hee, char*);
		if (j)
		{
			printf("%s", j);
		}
		else
		{
			printf("(nil)");
		}

		if (ind < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(hee);
}
