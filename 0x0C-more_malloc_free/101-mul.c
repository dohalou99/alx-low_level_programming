#include "main.h"
#include <stdlib.h>

#define ERR_MSG "Error"

int _is_digit(char *r);

/**
 * main - multiplies two positive numbers
 * @argc: the input number of args
 * @argv: the input array of args
 *
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	int j;

	if (argc != 3)
	{
		for (j = 0; ERR_MSG[j] != '\0'; j++)
			_putchar(ERR_MSG[j]);
		_putchar(10);
		exit(98);
	}
	if (_is_digit(argv[1]) == 0)
		printf("%s\n", argv[1]);
	return (0);
}

/**
 * _is_digit - function that check string contains a non-digit char
 * @r: the input checked string
 *
 * Return: 1 if true, 0 if it is not
 */

int _is_digit(char *r)
{
	while (*r)
	{
		if (*r < 48 || *r > 57)
		return (1);
		r++;
	}
	return (0);
}

