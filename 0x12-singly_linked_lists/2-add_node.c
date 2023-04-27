#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the input double pointer to the list
 * @str: the input new string
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_elm;
unsigned int lit = 0;

while (str[lit])
lit++;
new_elm = malloc(sizeof(list_t));
if (!new_elm)
return (NULL);

new_elm->str = strdup(str);
new_elm->len = lit;
new_elm->next = (*head);
(*head) = new_elm;

return (*head);
}
