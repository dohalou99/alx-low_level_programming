#include "main.h"

/**
 * new_prime - find a number is prime
 * @n: the inut number to be evaluated
 * @j: the input iterator
 *
 *Return: sqaure root
 */
int new_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (new_prime(n, j - 1));
}

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: the input number to be evaluated
 *
 * Return: sqaure root
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (new_prime(n, n - 1));
}
