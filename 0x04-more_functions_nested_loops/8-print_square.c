#include "main.h"
/**
 * print_square - Check description
 * Description: It tells if lower case
 * @n: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */

void print_square(int n)
{
	int c, d;

	if (n <= 0)
	{
		n = 0;
		_putchar('\n');
	}
	else

	{
		for (c = 1; c <= n; c++)
		{
			for (d = 1; d <= n; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
