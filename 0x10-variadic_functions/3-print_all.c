#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Write a function that prints anything
 *
 * @format: the input list of args
 */

void print_all(const char * const format, ...)
{
	va_list hee;
	char *st = "";
	int j;

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
			case 'c':
				printf("%c", (char) va_arg(hee, int));
				break;
			case 'i':
				printf("%i", va_arg(hee, int));
				break;
			case 'f':
				printf("%f", va_arg(hee, double));
				break;
			case 's':
				st = va_arg(hee, char *);
				if (st == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", st);
				break;
			default:
			j++;
			continue;
				}
			st = ",";
			j++;
		}
	}
	printf("\n");
	va_end(hee);
}
