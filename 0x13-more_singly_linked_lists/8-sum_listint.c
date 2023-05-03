#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - returns the sum of all the data (n) of a linked list
 *@head : the head of node
 *
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	unsigned int lit = 0;

	while (head != NULL)
	{
		lit += head->n;
		head = head->next;
	}
	return (lit);
}
