#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *  sum_them_all - returns the sum of all its parameters
 *
 *  @n: the input number of items
 *
 *  Return: If n == 0, return 0
 *          Returns the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;
	int sum = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
