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
	int len;
	int i = 0;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (; min < len; min++)
	{
		ptr[i] = min;
		i++;
	}
	return (ptr);
}
