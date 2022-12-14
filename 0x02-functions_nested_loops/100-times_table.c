#include "main.h"
/**
 * print_times_table - Prints all natural numbers from n
 * @n: The number to start printing from
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int c, d, e;

		for (c = 0; c <= n; c++)
		{
			for (d = 0; d <= n; d++)
			{
				e = c * d;

				if (e <= 9)
				{
					_putchar(e + '0');
				}
				else if (e > 9 && e <= 99)
				{
					_putchar((e / 10) + '0');
					_putchar((e % 10) + '0');
				}
				else
				{
					_putchar(((e / 10) / 10) + '0');
					_putchar(((e / 10) % 10) + '0');
					_putchar((e % 10) + '0');
				}
				if (d != n)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			}
			_putchar('\n');
		}

	}

}
