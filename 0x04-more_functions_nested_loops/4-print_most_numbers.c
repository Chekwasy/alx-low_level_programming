#include "main.h"
/**
 * print_most_numbers - Check description
 * Description: prints 1 to 9 aside 2 & 4 with new line
 * Non - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
	}
	_putchar('\n');                                    }
