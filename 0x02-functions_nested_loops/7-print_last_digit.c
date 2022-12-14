#include "main.h"
/**
 * print_last_digit - Check description
 * Description: It tells if lower case
 * @c: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */
int print_last_digit(int c)
{
	int n;

	if (c < 0)
	{
		n = -1 * (c % 10);
	}
	else
	{
		n = c % 10;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
