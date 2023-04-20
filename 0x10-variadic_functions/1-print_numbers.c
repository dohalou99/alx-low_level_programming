#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Write a function that prints numbers
 *
 * @separator: th input string to be printed
 * @n: the input number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list hee;
	unsigned int j;

	va_start(hee, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(hee, unsigned int));

		if (separator != NULL && j < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(hee);
}
