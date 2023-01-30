#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Function to add node at begining
 * @head: Pointer to the head
 * @n: member int
 * Return: return listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
