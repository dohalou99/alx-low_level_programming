#include "main.h"

int check_palindrome(char *s, int J, int L);
int _pal3(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the input string
 *
 * Return: 1 if it is the palindrome, 0 if it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _pal3(s)));
}

/**
 * check_palindrome - checks if the string is palindrome
 * @s: the checked string
 * @j: the iterator
 * @L: the length of the string
 *
 * Return: 1 if it is palindrome, 0 if it is not
 */
int check_palindrome(char *s, int j, int L)
{
	if (*(s + j) != *(s + L - 1))
		return (0);
	if (j >= L)
		return (1);
	return (check_palindrome(s, j + 1, L - 1));
}

/**
 * _pal3 - returns the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _pal3(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _pal3(s + 1));
}

