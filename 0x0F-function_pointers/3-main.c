#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - entry pointe
 * @argc: The input number of args
 * @argv: the input array of pointers
 *
 * Return: Always 0(success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	char *ut;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	ut = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(ut) == NULL || ut[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ut == '/' && n2 == 0) ||
	    (*ut == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(ut)(n1, n2));

	return (0);
}

