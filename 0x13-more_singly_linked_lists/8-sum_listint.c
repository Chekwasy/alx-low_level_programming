#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - Function to sum node data
 * @head: Pointer to the head
 * Return: return sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0, i = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp->next != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
		i++;
	}
	sum = sum + temp->n;
	return (sum);
}
