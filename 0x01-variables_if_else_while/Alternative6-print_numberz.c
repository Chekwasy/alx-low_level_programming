File Edit Options Buffers Tools C Help
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
		putchar('0' + d);
	putchar('\n');

	return (0);
}
