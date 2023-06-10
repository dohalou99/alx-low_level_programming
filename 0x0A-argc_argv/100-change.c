#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include"main.h"
/**
 * sh_coin - function help  that does all the mathematics
 * @j:variable passed from main for calculations
 * Return: The number of coins needed minimum for the passed in variable
 */
int sh_coin(int j)
{
	int mount = 0;

	while (j != 0)
	{
		if (j % 10 == 9 || j % 10 == 7)
			j -= 2;
		else if (j % 25 == 0)
			j -= 25;
		else if (j % 10 == 0)
			j -= 10;
		else if (j % 5 == 0)
			j -= 5;
		else if (j % 2 == 0)
		{
			if (j % 10 == 6)
				j -= 1;
			else
				j -= 2;
		}
		else
			j -= 1;

		mount++;
	}

	return (mount);
}

/**
 * main - that prints the minimum number of coins
 * @argc: the input Number of  args
 * @argv: the input Array
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int j, coi;

	coi = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);

	if (j < 0)
		printf("0\n");
	else
	{
		coi = sh_coin(j);

		printf("%d\n", coi);
	}

	return (0);
}
