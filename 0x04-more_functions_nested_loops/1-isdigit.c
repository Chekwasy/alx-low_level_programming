#include "main.h"
/**
 * _isdigit - Check description
 * Description: It tells if a digit
 * @c: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */

int _isdigit(int c)
{
	char n;
	int d = 0;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == c)
			d = 1;
	}
	return (d);
}
