#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Check description
 * Description: It tells if lower case
 * @ac: - An input parameter
 * @av: -d by a new line
 * Return: 1 when true and 0 when false
 */
char *argstostr(int ac, char **av)
{
	char **ptr;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	ptr = malloc(sizeof(char *) * ac);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		ptr[i] = av[i];
		printf("%s\n", ptr[i]);
	}
	return (*ptr);
}
