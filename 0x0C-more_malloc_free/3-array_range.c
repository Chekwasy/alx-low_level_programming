#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *ptr;

	if (min > max)
		return (NULL);
	if (min == NULL || max == NULL)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (; min <= max; min++)
	{
		ptr[min] = min;
	}
	return (ptr);
}
