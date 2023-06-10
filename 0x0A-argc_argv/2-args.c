#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: the input number of args
 * @argv: the input array of args
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);

	return (0);
}
