#include "stdio.h"
/**
* print_alphabet - Check description
* Description: It prints the alphabet in lowercase fallowe* d by a new line
* Return: Nothing.
*/
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
	putchar(a);
	}
	putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
