#include "main.h"
/**
 * _memset - Check description
 * Description: It tells if lower case
 * @s: - An input parameter
 * @b: - Another input paramer
 * @n: - 3rd  input parameter
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
