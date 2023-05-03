#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *find_listint_loop - finds the loop in a linked list
 *@head : the input pointer
 *
 *Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *max = head;
	listint_t *min = head;

	if (!head)
	{
		return (NULL);
	}
	while (min && max && max->next)
	{
		min = min->next;
		max = max->next->next;
		if (max == min)
		{
		min = head;
		while (min != max)
		{
		min = min->next;
		max = max->next;
		}
		return (max);
		}
	}
	return (NULL);
}
