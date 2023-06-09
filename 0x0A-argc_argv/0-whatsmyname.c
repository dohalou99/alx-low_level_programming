#include "main.h"
#include <stdio.h>

/**
 *main - function prints the name of the program
 *@argc: the input number of args
 *@argv: the input array of args
 *
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);
	return (0);
}

