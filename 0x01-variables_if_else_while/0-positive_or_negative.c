#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*main - Entry point*/
/**
*main -Determines if a number is positive, negative or zero.
*
*returne :Always 0 (success)
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d Is zero \n", n);
	}
	else
	{
	printf("%d is negative \n", n);
	}
	return (0);
}	