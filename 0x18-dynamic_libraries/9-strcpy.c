#include "main.h"

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;
	char *retptr = dest;

	for (a = 0; *src != '\0'; a++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (retptr);
}
