#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - Function to return nth node via index
 * @head: Pointer to the head
 * @index: nth node to return
 * Return: returning node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int ct = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		if (ct == index)
		{
			return (temp);
		}
		ct++;
		temp = temp->next;
		if (ct == index)
			return (temp);
	}
	ct++;
	if (ct == index)
		return (temp);
	return (NULL);
}