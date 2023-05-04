#include <stdio.h>
#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n : the input number
 *@index : the index, starting from 0 of the bit you want to set
 *
 *Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int lit;

	if (index > 63)
		return (-1);

	lit = 1 << index;
	*n = *n | lit;
	return (1);
}
