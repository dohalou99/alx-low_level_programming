#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - new node at the beginning of a list_t list.
 * @head: the input double pointer to the list_t list
 * @str: the input newst string to add in the node
 *
 * Return: the address of the new element, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newst;
	unsigned int length = 0;

	while (str[length])
	length++;

	newst = malloc(sizeof(list_t));
	if (!newst)
	return (NULL);

	newst->str = strdup(str);
	newst->length = length;
	newst->next = (*head);
	(*head) = newst;

	return (*head);
}
