#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * binary_search - Entry point
 * @array: - array to work on
 * @size: - size of array
 * @value: - value to search for
 * Return: value found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1;
	int to = size - 1;
	int i = 0, m = 0;

	if (array == NULL)
		return (-1);
	while (L <= R)
	{
		printf("Searching in array: ");
		while (i <= to)
		{
			printf("%d", array[i]);
			if (i != to)
				printf(", ");
			else
				printf("\n");
			i++;
		}
		m = floor((L + R) / 2);
		if (array[m] < value)
		{
			L = m + 1;
			to = R;
			i = L;
		}
		else if (array[m] > value)
		{
			R = m - 1;
			to = R;
			i = L;
		}
		else
			return (m);
	}
	return (-1);
}
