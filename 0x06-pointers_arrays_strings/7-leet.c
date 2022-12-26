#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int a = 0;
	int b;
	char arr1[5] = "aeotl";
	char arr2[5] = "AEOTL";
	char arr3[5] = "43071";

	while (*(str + a) != '\0')
	{
		for (b = 0; b < 5; b++)
		{
			if (*(str + a) == arr1[b] ||
			    *(str + a) == arr2[b])
			{
				*(str + a) = arr3[b];
			}
		}
		a++;
	}
	return (str);
}
