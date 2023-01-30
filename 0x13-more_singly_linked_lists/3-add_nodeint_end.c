#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Function to add node at begining
 * @head: Pointer to the head
 * @n: member int
 * Return: return listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;
	int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
			i++;
		}
		new->n = n;
		new->next = NULL;
		temp->next = new;
	}
	return (*head);
}
