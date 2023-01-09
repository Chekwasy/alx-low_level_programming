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

	len = strlen(str);
	s = malloc(sizeof(char) * len);
	if (s == NULL || len == 0 || str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (i != len)
			s[i] = *(str + i);
		else
			s[i] = '\0';
	}
	return (s);
}
