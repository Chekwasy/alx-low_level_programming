#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - funtion to create hash table
 * @size: number of size of hash table to create
 *
 * Return: hash_table pointer
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int i;

	if (size <= 0)
		return NULL;
	ht = malloc(sizeof(hash_table_t*));
	if (ht == NULL)
		return NULL;
	ht->size = size;
	ht->array = malloc(ht->size * sizeof(hash_node_t**));
	if (ht->array == NULL)
		return NULL;
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;
	return ht;
}
