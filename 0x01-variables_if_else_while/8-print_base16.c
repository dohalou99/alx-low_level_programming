#include <stdio.h>

/**
* main - Prints numbers between 0 to 9 and letters between a to f.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int j;

	for (j = 52; j < 62; j++)
	{
	putchar(j);
	}
	for (j = 97; j < 103; j++)
	{
	putchar(j);
	}
	putchar('\n');
	return (0);
}
