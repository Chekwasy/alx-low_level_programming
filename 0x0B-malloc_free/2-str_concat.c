#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Check description
 * Description: It tells if lower case
 * @s1: - An input parameter
 * @s2: - d by a new line
 * Return: 1 when true and 0 when false
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len;
	unsigned int i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1) + strlen(s2) + 1;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (i < (strlen(s1)))
		{
			s[i] = *(s1 + i);
		}
		if (i >= (strlen(s1)) && i < (len - 1))
		{
			s[i] = *(s2 + (i - (strlen(s1))));
		}
		if (i == (len - 1))
			s[i] = '\0';
	}
	return (s);
}
