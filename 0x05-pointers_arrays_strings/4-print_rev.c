#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i = i - 1;
	for (i; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
