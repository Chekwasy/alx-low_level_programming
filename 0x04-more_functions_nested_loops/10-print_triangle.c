#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{
	int c, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			for (d = 1; d <= size; d++)
			{
				if (c < (size - d + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
