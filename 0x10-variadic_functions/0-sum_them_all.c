#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameter
 * @n: the input variaic
 * Return: amn
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list love;
	unsigned int j, amn = 0;

	if (n == 0)
		return (0);

	va_start(love, n);

	for (j = 0; j < n; j++)
	{
		amn += va_arg(love, const unsigned int);
	}

	va_end(love);

	return (amn);
}
