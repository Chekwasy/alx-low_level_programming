#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Entry point
 * @array: - array to work on
 * @size: - size of array
 * @value: - value to search for
 * Return: value found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (value == array[n])
			return (n);
	}
	return (-1);
}
