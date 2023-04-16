#include "main.h"
#include <stdio.h>

/**
* main - Write a program that multiplies two numbers
*@argc: the number of command line arguments
*@argv: the array of arguments
*Return: returns 0(success)
*/
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		y = 1;
		for (x = 1; x < 3; x++)
			x *= atoi(argv[x]);

		printf("%d\n", y);
	}
	return (0);
}
