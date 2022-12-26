#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int a = 0;
	int b;

	char arr1[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + a) != '\0')
	{
		for (b = 0; b < 52; b++)
		{
			if (*(str + a) == arr1[b])
			{
				*(str + a) = arr2[b];
				break;
			}
		}
		a++;
	}
	return (str);
}
