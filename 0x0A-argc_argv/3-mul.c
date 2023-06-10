#include <stdio.h>
#include <stdlib.h>
#include"main.h"

/**
 * main - Write a program that multiplies two numbers
 * @argc: the input Number of args
 * @argv: the input Array name
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int l, m;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = 1;

		for (l = 1; l < 3; l++)
			m *= atoi(argv[l]);

		printf("%d\n", m);
	}

	return (0);
}
