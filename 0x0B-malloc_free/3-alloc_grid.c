#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - Check description
 * Description: It tells if lower case
 * @width: - An input parameter
 * @height: - Input
 * Return: 1 when true and 0 when false
 */
int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(sizeof(int) * width);
		if (ptr[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ptr[a]);
			free(ptr);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			ptr[a][b] = 0;
		}
	}
	return (ptr);
}
