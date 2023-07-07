#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: the input first number
 * @m: input second number
 *
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, cont = 0;
	unsigned long int curt;
	unsigned long int exclv = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		curt = exclv >> j;
		if (curt & 1)
			cont++;
	}

	return (cont);
}

