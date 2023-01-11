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
	char *ptr;
	int i;
	int n;
	int strln;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strln = strlen(av[i]);
		ptr = malloc(sizeof(char) * strln);
		if (ptr == NULL)
			return (NULL);
		for (n = 0; n <= strln; n++)
		{
			if (n != strln)
			{
				ptr[n] =*(av[i] + n);
			}
			if (n == strln)
				ptr[n] = '\0';
		}
		for (n = 0; n <= strln; n++)
		{
			printf("%c", ptr[n]);
		}
		printf("\n");
	}
	return (ptr);
}
