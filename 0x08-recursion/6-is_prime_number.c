#include "main.h"

/**
 * new_prime - check if a number is prime recursively
 * @j: the checked number
 * @k: the iterator
 *
 * Return: 1 if the input is the prime, 0 if  is not
 */
int new_prime(int j, int k)
{
	if (k == 1)
		return (1);
	if (j % k == 0 && k > 0)
		return (0);
	return (new_prime(j, k - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the checked number
 *
 * Return: 1 if the input is a prime number, 0 if is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (new_prime(n, n - 1));
}
