#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Check description
 * Description: It tells if lower case
 * @str: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */
char *_strdup(char *str)
{
	int len;
	int i;
	char *s;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	s = malloc(sizeof(char) * len);
	if (s == NULL || str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (i != (len - 1))
			s[i] = *(str + i);
		if (i == (len - 1))
			s[i] = '\0';
	}
	return (s);
}
