#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *reverse_listint - Write a function that reverses a linked list
 *@head : the input pointer
 *
 *Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *next = NULL;

	if (head == NULL)
	{
	return (NULL);
	}

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = first;
	first = *head;
	*head = next;
	}
	*head = first;

	return (*head);
}
