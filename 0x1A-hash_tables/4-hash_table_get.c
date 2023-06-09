#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - function to view value of a key
 * @ht:- hash table to print from
 * @key:- key to get value from
 * Return: char
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp = NULL;

	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL && strcmp(ht->array[idx]->key, key) == 0)
		return (ht->array[idx]->value);
	else if (ht->array[idx] == NULL)
		return (NULL);
	else
	{
		temp = ht->array[idx]->next;
		while (temp != NULL && temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
