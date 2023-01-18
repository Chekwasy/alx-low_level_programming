#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * array_iterator - prints buffer in hexa
 * @array: the address of memory to print
 * @size: the size of the memory to print
 * @action: - function to pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
