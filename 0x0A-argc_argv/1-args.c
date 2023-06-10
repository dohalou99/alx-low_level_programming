#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: the input number of args
 * @argv: the input array of args
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);
	return (0);
}


