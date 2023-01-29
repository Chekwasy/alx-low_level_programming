#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_b4(void) __attribute__ ((constructor));
void print_b4(void)
{
printf("You're beat! and yet, you must allow,\n"
       "I bore my house upon my back!\n");
}
