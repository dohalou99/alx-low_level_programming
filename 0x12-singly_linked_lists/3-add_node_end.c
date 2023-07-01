#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -function that adds a new node at the end of list
 * @head: the input double pointer
 * @str: the input string to put in the new node
 *
 * Return: address of the new element, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newst;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
	length++;

	newst = malloc(sizeof(list_t));
	if (!newst)
	return (NULL);

	newst->str = strdup(str);
	newst->length = length;
	newst->next = NULL;

	if (*head == NULL)
	{
	*head = newst;
	return (newst);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = newst;
	return (newst);
}

