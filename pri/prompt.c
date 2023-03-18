#include <stdio.h>
#include <unistd.h>

/**
 * main - Print "$ " first with the string after it on next line
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	printf("$ ");
	while ((c = getchar()) != EOF)
		putchar(c);
	return (0);
}
