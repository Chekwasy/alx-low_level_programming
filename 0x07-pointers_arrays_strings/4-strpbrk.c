#include "main.h"
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;
	int c;
	int d;

	c = strlen(s);
	d = strlen(accept);
	for (a = 0; a < c; a++)
	{
		for (b = 0; b < d; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				return (s + a);
			}
		}
	}
	return (NULL);
}
