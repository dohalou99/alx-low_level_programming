#include <stdio.h>

/**
 * rot13 - Write a function that encodes a string using rot13.
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int l;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (l = 0; l < 52; l++)
	{
	if (s[i] == data1[l])
	{
	s[i] = datarot[l];
	break;
	}
	}
	}
	return (s);
}
