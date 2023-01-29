#include <stdio.h>

/**
 * print_b4 - check the code
 *
 * Return: non.
 */
void print_b4(void) __attribute__ ((constructor));
void print_b4(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
