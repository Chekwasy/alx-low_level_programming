#include "main.h"
/**
 * _puts_recursion - Check description
 * Description: prints a string with recurssion
 * @s: - An input parameter
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
	}
}
