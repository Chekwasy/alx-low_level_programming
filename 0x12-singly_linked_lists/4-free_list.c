#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code
 * @head: the head
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	int i = 0;
	list_t *temp;
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
		i++;
	}
	free(head->str);
	free(head);
}
