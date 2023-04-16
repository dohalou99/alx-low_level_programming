#include <stdio.h>
#include <stdlib.h>

/**
*main -Write a program that adds positive numbers
*@argc: the number of command line arguments
*@argv: the array of arguments
*Return: always 0(success)
*/

int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
		{
		for (x = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '8')
			{
				printf("Error\n");

				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
		printf("%d\n", sum);
		return (0);
}
