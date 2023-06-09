#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int hs;
	char *s = "betty";

	hs = key_index((unsigned char *)s, 1024);
	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	printf("%s\n", ht->array[hs]->value);
	return (EXIT_SUCCESS);
}
