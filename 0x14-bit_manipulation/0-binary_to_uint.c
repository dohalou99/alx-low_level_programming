#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b : the input string
 *
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int val = 0;

	if (b == NULL)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		val = 2 * val + (b[x] - '0');
	}
	return (val);
}
