#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the input number to print in binary
 */
void print_binary(unsigned long int n)
{
	int j, cont = 0;
	unsigned long int curt;

	for (j = 63; j >= 0; j--)
	{
		curt = n >> j;

		if (curt & 1)
		{
			_putchar('1');
			cont++;
		}
		else if (cont)
			_putchar('0');
	}
	if (!cont)
		_putchar('0');

}

