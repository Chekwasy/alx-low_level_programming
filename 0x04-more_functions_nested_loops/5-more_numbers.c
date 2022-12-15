#include "stdio.h"
/**
 * more_numbers - Check description
 * Description: prints 1 to 9 aside 2 & 4 with new line
 * Non - An input parameter
 * d by a new line
 * Return: non
 */

void more_numbers(void)
{
	char n, c;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar('0' + c);
		}

		_putchar('\n');
		i++;
	}
}
