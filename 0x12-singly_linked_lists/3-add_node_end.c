#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the input head of the linked
 * @str: the input string to store in the list.
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_elm;
	list_t *temp = *head;
	unsigned int lit = 0;

	while (str[lit])
	lit++;
	new_elm = malloc(sizeof(list_t));
	if (!new_elm)
	return (NULL);
	new_elm->str = strdup(str);
	new_elm->len = lit;
	new_elm->next = NULL;

	if (*head == NULL)
	{
		*head = new_elm;
		return (new_elm);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = new_elm;

	return (new_elm);
}
