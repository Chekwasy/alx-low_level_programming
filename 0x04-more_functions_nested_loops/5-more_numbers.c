#include "main.h"
/**
 * more_numbers - Check description
 * Description: prints 1 to 9 aside 2 & 4 with new line
 * Non - An input parameter
 * d by a new line
 * Return: non
 */

void more_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		char b;

		for (b = '0'; b <= '9'; b++)
		{
			if (a == '0')
			{
				_putchar(b);
			}
			if (a == '1' && b < '5')
			{
				_putchar(a);
				_putchar(b);
			}
		}
		_putchar('\n');
		n++;
	}
	}
}
