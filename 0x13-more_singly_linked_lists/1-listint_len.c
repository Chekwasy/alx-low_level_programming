#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - To print lenght of node
 * @h: struct of ints
 * Return: number of ints
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (NULL);
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	i++;
	return (i);
}
