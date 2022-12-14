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
		n = (c * -1) % 10;
	}
	if (c >= 0)
	{
		n = c % 10;
	}
	return (n);
}
