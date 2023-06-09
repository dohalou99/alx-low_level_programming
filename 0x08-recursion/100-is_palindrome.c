#include "main.h"

int _recursion(char *s);
int chepalind(char *s, int j, int hee);


/**
* is_palindrome - checks the string if is a palindrome
* @s: the input string
*
* Return: 1 if it is, 0 it's not
*/
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (chepalind(s, 0, _recursion(s)));
}

/**
* _recursion - that returns the length of a string
* @s: the input string
*
* Return: the length of the string
*/
int _recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _recursion(s + 1));
}

/**
* chepalind - function checks the characters for palindrome
* @s: the input string to be checked
* @j: te input iterator
* @hee: the length of the string
*
* Return: 1 if palindrome, 0 if not
*/
int chepalind(char *s, int j, int hee)
{
	if (*(s + j) != *(s + hee - 1))
	return (0);
	if (j >= hee)
	return (1);
	return (chepalind(s, j + 1, hee - 1));
}

