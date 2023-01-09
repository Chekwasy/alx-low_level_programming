#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _islower - Check description
 * Description: It tells if lower case
 * @c: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
