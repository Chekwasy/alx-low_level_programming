#include "main.h"
/**
 * _strcmp - Check description
 * Description: It tells if lower case
 * @s1: - An input parameter
 * @s2: - An input parameter
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			break;
		}
		else
		{
			b = 0;
		}
	}
	return (b);
}
