#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - deletes the head node of a linkd list
 *@head : the input pointer
 *
 *Return: to the int
 */
int pop_listint(listint_t **head)
{
	int lit;
	listint_t *newnode;

	if (!head || !*head)
	return (0);

	lit = (*head)->n;
	newnode = (*head)->next;
	free(*head);
	*head = newnode;

	return (lit);
}
