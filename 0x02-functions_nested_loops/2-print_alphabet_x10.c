#include "main.h"
/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet in lowercase fallowe ten times\
 * d by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
