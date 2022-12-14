#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Check main
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */

	void print_t0_98(int n)
{
	int c;

	if (n > 98)
	{
		for (c = n; c >= 98; c--)
		{
			printf("%d", c);
			if (c != 98)
			{
				printf(", ");
			}
		}
	}
	if (n < 98)
	{
		for (c = n; c <= 98; c++)
		{
			printf("%d", c);
			if (c < 98)
			{
				printf(", ");
			}
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
