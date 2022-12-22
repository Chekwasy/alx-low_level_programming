#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int b;
	int len;
	int arr[1000];

	len = n / 2;
	for (b = 0; b < len; b++)
	{
		arr[b] = a[b];
		a[b] = a[n - 1 - b];
		a[n - b - 1] = arr[b];
	}
}
