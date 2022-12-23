#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int len;
	int b;
	int c;
	char *retpt;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (b = 0; b < len; b++ )
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			if (c ==  str[b])
			{
				str[b] = str[b] - 32;
			}
		}
	}
	retpt = str;
	return (retpt);
}
