#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_strings - prints buffer in h
 * @separator: the address of memory to print
 * @n: the size of the memory to print
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *st;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(ap, char*);
		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
