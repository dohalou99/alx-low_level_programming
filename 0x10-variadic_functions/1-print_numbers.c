#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Write a function that prints numbers
 * @separator: the input string
 * @n: the input number
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *tor;
	unsigned int j;
	va_list amn;

	if (separator == NULL || *separator == 0)
		tor = "";
	else
		tor = (char *) separator;
	va_start(amn, n);

	if (n > 0)
		printf("%d", va_arg(amn, int));
	for (j = 1; j < n; j++)
		printf("%s%d", tor, va_arg(amn, int));
	printf("\n");
	va_end(amn);
}
