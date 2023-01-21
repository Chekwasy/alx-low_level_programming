#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_all - prints buffer in he
 * @format: the size of the memory to print
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, 3);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
		case 'i':
			printf("%d", va_arg(ap, int));
		case 'f':
			printf("%f", va_arg(ap, double));
		case 's':
			if (va_arg(ap, char*) == NULL)
				printf("(nil)");
			else
				printf("%s", va_arg(ap, char*));
		}
		if ((format[i] == 'c' ||
		     format[i] == 'i' ||
		     format[i] == 'f' ||
		     format[i] == 's') &&
		    format[i + 1] != '\0')
			printf(", ");
	}

	va_end(ap);
	printf("\n");
}
