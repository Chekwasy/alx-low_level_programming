#include "main.h"
/**
 * _memcpy - Check description
 * Description: It tells if lower case
 * @dest: - An input parameter
 * @src: - Input parameter
 * @n: - input parameter
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
