#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Function to delete head
 * @head: Pointer to the head
 * Return: return head data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	temp = NULL;
	return (n);
}
