#include "main.h"
#include <stdio.h>

/**
* main - Write a program that prints all arguments it receives
*@argc: the number of command line arguments
*@argv: the array arguments
*Return: always 0(success)
*/
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
	printf("%s\n", argv[j]);
	}
	return (0);
}
