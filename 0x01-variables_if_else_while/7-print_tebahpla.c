#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	char j;

	for (j = 'Z'; j >= 'A'; j--)
	{
	putchar(j);
	}
	putchar('\n');
	return (0);
}
