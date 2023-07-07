#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the input number to search
 * @index: the input index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valu;

	if (index > 63)
		return (-1);

	valu = (n >> index) & 1;

	return (valu);
}

