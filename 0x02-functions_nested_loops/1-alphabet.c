#include <stdio.h>
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
	return ();
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
