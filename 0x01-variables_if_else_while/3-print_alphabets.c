#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = 'a';
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
char d;
d = 'A';
for (d = 'A'; d <= 'Z'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
