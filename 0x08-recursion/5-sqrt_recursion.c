#include "main.h"

/**
 * new_sqrt_recursion- find the natural square root of a nember
 * @j: the number to calculate the sqaure root of
 * @k: the iterator
 *
 * Return: On 1 (success).
 */
int new_sqrt_recursion(int j, int k)
{
	if (k * k == j)
		return (k);
	else if (k * k > j)
		return (-1);
	return (new_sqrt_recursion(j, k + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: the value number
 *
 * Return: On  1 (success).
 */
int _sqrt_recursion(int n)
{
	return (new_sqrt_recursion(n, 1));
}
