#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int a, b, d, e;

	d = strlen(s);
	e = strlen(accept);
	for (a = 0; a < d; a++)
	{
		for (b = 0; b <= e; b++)
		{
			if (*(s + a) == (*(accept  + b)))
			{
				c++;
				break;
			}
			else if (*(accept + b) == '\0')
			{
				return (c);
			}
		}
	}
	return (c);
}
