#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{

	unsigned long int num, b;
	int a;

	num = 612852475143;

	for (a = 1; a < 5; a++)
	{
		if (num % 3 == 0)
		{
			num = num / 3;
		}
	}
	for (b = 1; b < num; b++)
	{
		if (b > 3)
		{
			if (num % b == 0)
			{
				num = num / b;
				continue;
			}
		}
	}
	printf("%lu\n", num);
	return (0);
}
