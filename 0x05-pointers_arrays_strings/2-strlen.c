#include "main.h"
/**
 * _strlen - Check description
 * Description: It tells if lower case
 * @s: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
