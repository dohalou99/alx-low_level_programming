#include "main.h"

/**
 * get_endianness -a function that checks the endianness
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *cr = (char *) &j;

	return (*cr);
}

