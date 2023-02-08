#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Function to free structs
 * @head: Pointer to the head
 * Return: return listint_t
 */
void free_listint2(listint_t **head)
{
	int i;
	listint_t *temp;

	if ((*head) == NULL)
		return;
	while ((*head)->next != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
		i++;
	}
	free(*head);
	(*head) = NULL;
}