#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: the input pointer
 * @size: input the size of matrix
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sumA, sumB, j;

	sumA = 0;
	sumB = 0;

	for (j = 0; j < size; j++)
	{
		sumA = sumA + a[j * size + j];
	}

	for (j = size - 1; j >= 0; j--)
	{
		sumB += a[j * size + (size - j - 1)];
	}

	printf("%d, %d\n", sumA, sumB);
}
