#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints
 * @h: the struct
 *
 * Return: Nothing.
 */
size_t list_len(const list_t *h)
{
	unsigned int c = 0;
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		c++;
		i++;
	}
	return (c);
}
