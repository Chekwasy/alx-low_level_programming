#include "main.h"
/**
 * _puts - Check description
 * Description: It tells if lower case
 * @str: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */
void _puts(char *str)
{
	int i = 0;

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
		i++;
	}
	_putchar('\n');
}
