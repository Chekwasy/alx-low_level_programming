#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
int _printf(const char *format, ...)
{
	va_list op;
	char *str;
	int i = 0;

	va_start(op, format);
	if (format == NULL)
	{
		_putchar('\n');
		return (1);
	}
	while (format[i])
	{
		switch(format[i])
		{
		case 'c':
		{
			_putchar(va_arg(op, int));
			break;
		}
		case 's':
		{
			str = va_arg(op, char*);
			printstr(str);
			break;
		}
		}
		i++;
	}
	va_end(op);
	return (0);
}
