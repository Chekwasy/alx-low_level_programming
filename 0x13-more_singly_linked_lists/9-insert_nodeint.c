#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Function to insert node at an index given
 * @head: Pointer to the head
 * @idx: index to put in the new node
 * @n: data value of each struct
 * Return: return listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *new, *hold;

	if ((*head) == NULL)
		return (NULL);
	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	while (temp->next != NULL)
	{
		if (idx == i)
		{
			new->n = n;
			new->next = temp;
			if (idx != 0)
				hold->next = new;
			else
				*head = new;
			return (new);
		}
		hold = temp;
		temp = temp->next;
		i++;
	}
	if (i == idx)
	{
		new->n = n;
		new->next = temp;
		hold->next = new;
		return (new);
	}
	if (idx == (i + 1))
	{
		new->n = n;
		new->next = NULL;
		temp->next = new;
	}
	return (NULL);
}
