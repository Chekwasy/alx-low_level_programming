#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _print_rev_recursion - Check description
 * Description: reverse recursion
 * @s: - An input parameter
 * d by a new line
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int n;

	if (s == NULL)
	{
		return;
	}
	if (*s == '\n')
	{
		n = strlen(s) - 1;
		s = s + n;
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
