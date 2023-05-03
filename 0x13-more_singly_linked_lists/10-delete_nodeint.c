#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index
 *@head: the input pointer
 *@index: the input index
 *
 *Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *lit = *head;
	listint_t *hee = NULL;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(lit);
	return (1);
	}

	while (j < index - 1)
	{
	if (!lit || !(lit->next))
	return (-1);
	lit = lit->next;
	j++;
	}
	hee = lit->next;
	lit->next = hee->next;
	free(hee);
	return (1);
}
