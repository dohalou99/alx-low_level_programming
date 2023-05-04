#include <stdio.h>
#include "main.h"

/**
 *get_bit - that returns the value of a bit at a given index
 *@n : the input number
 *
 *@index : the index, starting from 0 of the bit you want to get
 *Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int lit;

	if (index > 63)
		return (-1);

	lit = 1 << index;
	return ((lit & n) > 0);
}
