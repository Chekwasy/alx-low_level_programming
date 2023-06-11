#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - setting hash table
 * @ht:- created hash table
 * @key:- key string to use
 * @value:- value of the string
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hs;
	hash_node_t *hn = NULL;
	hash_node_t *temp = NULL;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);
	if (value == NULL)
		return (0);
	hs = key_index((unsigned char *)key, ht->size);
	if (ht->array[hs] && strcmp(ht->array[hs]->key, key) == 0)
	{
		free(ht->array[hs]->value);
		ht->array[hs]->value = strdup(value);
		return (1);
	}
	hn = malloc(sizeof(hash_node_t));
	if (hn == NULL)
		return (0);
	hn->next = NULL;
	hn->key = strdup(key);
	hn->value = strdup(value);

	temp = ht->array[hs];
	hn->next = temp;
	ht->array[hs] = hn;
	return (1);
}
