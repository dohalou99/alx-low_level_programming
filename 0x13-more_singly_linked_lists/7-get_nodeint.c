#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index -returns the nth node of a linked list
 *@head : the input pointerc
 *@index : the index of the node
 *
 *Return: to the listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *newnode = head;

	while (newnode && j < index)
	{
	newnode = newnode->next;
	j++;
	}
	return (newnode ? newnode : NULL);
}
