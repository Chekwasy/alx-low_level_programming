#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Check main
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */

void print98(int n)
{
	int c;

	if (n > 98)
	{
		for (c = n; c >= 98; c--)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			if (c != 98)
			{
				_putchar(',');
				_putchar((' ');
			}
		}
		if (n < 98)
		{
			for (c = n; c <= 98; c++)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (c < 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		if (n == 98)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		return (0);
	}
