#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	long int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
