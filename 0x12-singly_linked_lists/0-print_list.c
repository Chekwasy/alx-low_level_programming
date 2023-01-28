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
	unsigned int i;

	for (i = 0; i < 2; i++)
	{
		if (h->str == NULL)
			printf("[%i] (nil)\n", h->len);
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
	return (c);
}
