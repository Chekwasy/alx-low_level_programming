#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - check the code
 * @head: the head
 * @str: string
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	if (str == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	temp = *head;
	if (*head != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
			i++;
		}
		new->next = NULL;
		temp->next = new;
	}
	else
	{
		*head = new;
		new->next = NULL;
	}
	return (new);
}
