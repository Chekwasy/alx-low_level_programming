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
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
