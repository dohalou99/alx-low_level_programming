#include "main.h"
		
/**
 * _isalpha - program that check for alphabetic character
 * @c: the input character to be checked
 * Return: 1 if c is a letter, 0 if is not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

