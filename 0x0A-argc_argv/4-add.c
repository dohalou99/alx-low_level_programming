#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Write a program that adds positive numbers
 * @argc: the input Number of args
 * @argv: the input Array n
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int x, y, len, som;
	char *amn;

	if (argc < 2)
		printf("0\n");
	else
	{
		som = 0;
		for (x = 1; x < argc; x++)
		{
			amn = argv[x];
			len = strlen(amn);

			for (y = 0; y < len; y++)
			{
				if (isdigit(*(amn + y)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			som += atoi(argv[x]);
		}

	printf("%d\n", som);
	}
	return (0);
}
