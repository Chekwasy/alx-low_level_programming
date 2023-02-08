#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - To print list of int
 * @h: struct of ints
 * Return: number of ints
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	i++;
	printf("%d\n", h->n);
	return (i);
}