#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_name - prints buffer in he
 * @name: the address of memory to print
 * @f: the size of the memory to print
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
