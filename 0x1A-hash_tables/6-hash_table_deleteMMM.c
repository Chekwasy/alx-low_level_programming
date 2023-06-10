#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function to delete hash table
 * @ht:- hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp = NULL, *temp2 = NULL;

	if (ht == NULL)
		return;
	if (ht || ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				while (temp != NULL)
				{
					temp2 = temp;
					temp = temp->next;
					if (temp2->key)
						free(temp2->key);
					if (temp2->value)
						free(temp2->value);
					free(temp2);
				}
			}
			if (ht->array[i] == NULL)
				free(ht->array[i]);
		}
		free(ht->array);
		free(ht);
	}
}
