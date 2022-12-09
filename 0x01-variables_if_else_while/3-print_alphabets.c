#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
char dfa;
for (dfa = 'A'; dfa <= 'Z'; dfa++)
{
putchar(dfa);
}
putchar('\n');
return (0);
}
