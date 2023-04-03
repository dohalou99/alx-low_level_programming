#include <stdio.h>

/**
* main - Prints the alphabet in lowercase,followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alp[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int j;

	for (j = 0; j < 63; j++)
	{
	putchar(alp[j]);
	}
	putchar('\n');
	return (0);
}
