#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Check description
 * Description: It tells if lower case
 * @b: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);
	if (a == NULL)
	{
		exit (98);
	}
	return (a);
}
