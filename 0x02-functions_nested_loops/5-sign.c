#include "main.h"
/**
 * print_sign - Check description
 * Description: It tells if lower case
 * @n: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */
int print_sign(int n)
{
	int res = 0;
		if (n > 0)
	{
		res = 1;
		_putchar('+');
	}
	if (n < 0)
	{
		res = -1;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
	}
	return (res);
}
