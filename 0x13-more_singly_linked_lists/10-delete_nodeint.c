#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Function to delete node at given index
 * @head: Pointer to the head
 * @index: index to delete
 * Return: return 1 if success or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *hold;

	if ((*head) == NULL)
		return (-1);
	temp = *head;
	hold = *head;
	while (temp->next != NULL)
	{
		if (index == i)
		{
			if (index == 0)
			{
				*head = temp->next;
				free(temp);
				return (1);
			}
			else
			{
				hold->next = temp->next;
				free(temp);
				return (1);
			}
		}
		hold = temp;
		temp = temp->next;
		i++;
	}
	if (i == index && i != 0)
	{
		hold->next = NULL;
		free(temp);
		return (1);
	}
	if (i == index && i == 0)
	{
		*head = NULL;
		return (1);
	}
	return (-1);
}
