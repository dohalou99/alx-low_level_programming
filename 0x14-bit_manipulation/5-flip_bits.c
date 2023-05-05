#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *@n : the input number
 *@m : the input number 2
 *Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, low = 0;
	unsigned long int x;
	unsigned long int y = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		x = y >> j;
		if (x & 1)
			low++;
	}
	return (low);
}
