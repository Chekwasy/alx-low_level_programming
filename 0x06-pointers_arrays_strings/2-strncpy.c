#include "main.h"
/**
 * _strncpy - Check description
 * Description: It tells if lower case
 * @dest: - An input parameter
 * @src: - An input parameter
 * @n: - An input parameter
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int b;
	int c;
	char *retptr;

	for (a = 0; dest[a] != '\0'; a++)
	{

	}
	for (b = 0; *(src + b) != '\0'; b++)
	{

	}
	if (n > b)
	{
		for (c = 0; c < b; c++)
		{
			dest[c] = *(src + c);
		}
		dest[c] = '\0';
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			dest[c] = *(src + c);
		}
	}
	retptr = dest;
	return (retptr);
}
