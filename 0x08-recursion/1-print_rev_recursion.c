#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
if (*s != '\0')
{
	s++;
	_print_rev_recursion(s);
	putchar(*s);
}
