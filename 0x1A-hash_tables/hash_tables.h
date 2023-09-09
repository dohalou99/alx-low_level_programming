#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct hash_node_s - wwrite a Node of a hash table
 *
 * @key: The input key, string
 * The key is unique in the HashTable
 * @value: The input value corresponding to a key
 * @next: the input pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - function Hash table data structure
 *
 * @size: The input size of the array
 * @array: the input array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int add_node(hash_node_t **head, char *key, char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
#endif
