#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: the input list of types
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *love, *tor = "";

	va_list amn;

	va_start(amn, format);

	if (format)
	{
	while (format[j])
	{
	switch (format[j])
	{
	case 'c':
	printf("%s%c", tor, va_arg(amn, int));
	break;
	case 'i':
	printf("%s%d", tor, va_arg(amn, int));
	break;
	case 'f':
	printf("%s%f", tor, va_arg(amn, double));
	break;
	case 's':
	love = va_arg(amn, char *);
	if (!love)
	love = "(nil)";
	printf("%s%s", tor, love);
	break;
	default:
	j++;
	continue;
	}
	tor = ", ";
	j++;
	}
	}

	printf("\n");
	va_end(amn);
}
