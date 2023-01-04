#include "main.h"
/**
 * _puts_recursion - Check description
 * Description: prints a string with recurssion
 * @s: - An input parameter
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
