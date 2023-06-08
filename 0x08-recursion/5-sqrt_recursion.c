#include "main.h"

int new_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion -  function that returns the natural square root of a numb
 * @n:the input number
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (new_sqrt_recursion(n, 0));
}

/**
 * new_sqrt_recursion - find the natural square root of a numb
 * @n: the input number
 * @j: the imput iterator
 *
 * Return: sqaure root
 */
int new_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (new_sqrt_recursion(n, j + 1));
}

