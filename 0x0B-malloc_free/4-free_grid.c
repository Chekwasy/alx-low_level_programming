#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Check description
 * Description: It tells if lower case
 * @grid: - An input parameter
 * @height: -  by a new line
 * Return: 1 when true and 0 when false
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
