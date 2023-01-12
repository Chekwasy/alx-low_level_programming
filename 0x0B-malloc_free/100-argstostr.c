#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr - Check description
 * Description: It tells if lower case
 * @ac: - An input parameter
 * @av: -d by a new line
 * Return: 1 when true and 0 when false
 */
char *argstostr(int ac, char **av)
{
	int strln = 0;
	int a;
	int ch;
	int b;
	int c = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		strln = strln + strlen(av[a]);
	}
	strln = strln + ac;
	ptr = malloc(sizeof(char) * strln);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		ch = strlen(av[a]);
		for (b = 0; b < ch; b++)
		{
			ptr[c] = av[a][b];
			c++;
		}
		ptr[c++] = '\n';
	}
	ptr[strln] = '\0';
	return (ptr);
}
