#include "main.h"
#include <stdio.h>
/**
 * print_array - Check description
 * Description: It tells if lower case
 * @a: - An input parameter
 * @n: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
