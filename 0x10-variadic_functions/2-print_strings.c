#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings
 * @separator: The input string
 * @n: The input number
 * @...: the input variable numb to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list amn;
	char *tor;
	unsigned int love;

	va_start(amn, n);
	for (love = 0; love < n; love++)
	{
		tor = va_arg(amn, char *);

		if (tor == NULL)
			printf("(nil)");
		else
			printf("%s", tor);

		if (love != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(amn);
}
