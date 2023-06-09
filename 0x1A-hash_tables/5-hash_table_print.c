#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print all keys and its valuse
 * @ht:- hashtable to print all
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i = 0, j = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp && temp != NULL)
		{
			if (j >= 1)
				printf(", ");
			printf("\'%s\': \'%s\'", temp->key, temp->value);
			j++;
			while (temp->next && temp->next != NULL)
			{
				temp = temp->next;
				if (j >= 1)
					printf(", ");
				printf("\'%s\': \'%s\'", temp->key, temp->value);
				j++;
			}
		}
	}
	printf("}\n");
}
