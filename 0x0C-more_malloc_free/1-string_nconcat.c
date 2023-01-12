#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - check the code
 * @s1: - string 1 parameter
 * @s2: - string 2 parameter
 * @n: - number of char parameter
 * Return: pointer to concat string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len;
	int ch;
	int nn;
	int sl1;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	nn = n;
	ch = strlen(s2);
	if (nn >= ch)
		nn = ch;
	len = strlen(s1) + nn + 1;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	sl1 = strlen(s1);
	len = 0;
	for (ch = 0; ch < sl1; ch++)
	{
		ptr[len] = *(s1 + ch);
		len++;
	}
	for (ch = 0; ch < nn; ch++)
	{
		ptr[len] = *(s2 + ch);
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}
