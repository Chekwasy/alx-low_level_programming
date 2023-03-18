#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
/**
 * main - Print "$ " first with the string after it on next line
 *
 * Return: Always 0.
 */
int main(void)
{
	ssize_t n = 20, size;
	char *ptr;

	printf("$ ");
	ptr = malloc(sizeof(char) * n);
	size = _getline(&ptr, &n, stdin);
	printf("%s%ld\n", ptr, size);
	return (0);
}

/**
 * _getline - Print "$ " first with the string after it on next line
 * @lineptr: parameter of address holding buffer of string
 * @n: length of string
 *@stream: The stream to receive file;
 * Return: length of input string.
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	char str[120];
	int i = 0;

	if (lineptr == NULL || n == NULL || stream == NULL)
	{
		perror("Error! wrong parameter or file pointer problem");
		exit(1);
	}
	if (*lineptr == NULL)
	{
		if ((*lineptr = malloc(sizeof(str))) == NULL)
		{
			perror("Unable to allocate memory");
			exit(1);
		}
	}
	*lineptr[0] = '\0';
	while (fgets(*lineptr, *n, stream))
	{
		if ((*n - strlen(*lineptr)) < sizeof(str))
		{
			*n *= 2;
			if ((*lineptr = realloc(*lineptr, *n)) == NULL)
			{
				perror("Unable to reallocate memory");
				exit(1);
			}
		}
		strcat(*lineptr, str);
		if ((*lineptr)[strlen(*lineptr) - 1] == '\n')
			return (strlen(*lineptr));
	}
	return (0);
}
