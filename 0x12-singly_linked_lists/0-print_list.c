#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints
 * @h: the struct
 *
 * Return: Nothing.
 */
size_t print_list(const list_t *h)
{
	unsigned int c = 0;
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%i] (nil)\n", h->len);
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		c++;
		i++;
	}
	return (c);
}
