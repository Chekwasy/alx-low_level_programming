#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int len;
	int b;
	int c;
	int d;
	int e;
char n[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	char *retpt;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (d = 0; n[d] != '\0'; d++)
	{
	}
	for (b = 0; b < len; b++)
	{
		for (e = 0; e < d; e++)
		{
			if (str[b - 1] == n[e])
			{
				for (c = 'a'; c <= 'z'; c++)
				{
					if (c ==  str[b])
					{
						str[b] = str[b] - 32;
					}
				}
			}
		}
	}
	retpt = str;
	return (retpt);
}
