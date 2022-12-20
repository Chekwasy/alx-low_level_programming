#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to beb reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int i;
	int a;
	int b;
	char arr;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	a = i / 2;

	for (b = 0; b < a; b++)
	{
		arr = *(s + b);
		*(s + b) = *(s + (i - 1 - b));
		*(s + (i - 1 - b)) = arr;
	}
}
