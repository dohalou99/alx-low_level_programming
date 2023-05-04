#include <stdio.h>
#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n : the printed number in binary
 *
 */
void print_binary(unsigned long int n)
{
	int j, low = 0;
	unsigned long int noor;

	for (j = 63; j >= 0; j--)
	{
		noor = n >> j;

		if (noor & 1)
		{
			putchar('1');
			noor++;
		}
		else if (low)
			putchar('0');
	}
	if (!low)
		putchar('0');
}
