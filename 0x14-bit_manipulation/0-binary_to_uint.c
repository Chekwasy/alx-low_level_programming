#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int _pow(int x, int y);
/**
 * binary_to_uint - function to convert binary to base 10
 * @b: string of binary to covert
 *
 * Return: converted value.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len;
	int c, g = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;
	i = len;
	while (i >= 0)
	{
		c = (b[i]) - 48;
		if (c != 0 && c != 1)
			return (0);
		if (c == 1)
		{
			sum = sum + (_pow(2, g));
		}
		i--;
		g++;
	}
	return (sum);
}
/**
 * _pow - function for power raise
 * @x: parameter 1
 * @y: parameter 2
 * Return: converted value.
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y == 1)
		return (x);

	else
		return (x * _pow(x, y - 1));
}
