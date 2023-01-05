#include "main.h"
/**
 * _print_rev_recursion - Check description
 * Description: reverse recursion
 * @s: - An input parameter
 * d by a new line
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		s = s + 13;
	}
	if (*s != '\n')
	{
		_putchar(*(s));
		s--;
		if (*s != '\n')
		{
			_print_rev_recursion(s);
		}
		_putchar('\n');
	}
}
