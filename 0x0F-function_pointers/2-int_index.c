#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * int_index - prints buffer in he
 * @array: the address of memory to print
 * @size: the size of the memory to print
 * @cmp: func to pointers
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
