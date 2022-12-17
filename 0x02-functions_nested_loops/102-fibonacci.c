#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 *
 * Return: Nothing!
 */
int main(void)
{
	int i;
	unsigned long int a, next;

	a = 1;
	next = 2;

	printf("%ld, ", a);
	printf("%ld, ", next);

	for (i = 1; i <= 48; i++)
	{
		next = next + a;
		a = next - a;
		printf("%ld", next);
		if (i < 48)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);

}
