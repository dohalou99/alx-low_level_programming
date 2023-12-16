#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - the singly linked list
 *
 * @n: the input Integer
 * @index: the input Index of the node in the list
 * @next: the input Pointer to the next node
 *
 * Description: the singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - the Singly linked list wih an express lane
 *
 * @n: Integer
 * @index: the input Index of the node in the list
 * @next:the Pointer to the next node
 * @express: the input Pointer to the next node in the express lane
 *
 * Description: the singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int size);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int recursive_binary_search(int *array, int low, int high, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS */
