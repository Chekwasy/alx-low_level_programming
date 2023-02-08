#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - A function that creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, nor written,
 * nor write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fileRep, i = 0, wrt, len;
	char *str;

	if (filename == NULL)
		return (-1);
	fileRep = open(filename, O_WRONLY | O_CREAT);
	if (fileRep < 0)
		return (-1);
	len = strlen(text_content);
	str = malloc (sizeof(char) * len);
	if (str == NULL)
		return (-1);
	while (i < len)
	{
		str[i] = text_content[i];
		i++;
	}
	wrt = write(fileRep, str, len);
	if (wrt < 0)
		return (-1);
	free(str);
	close(fileRep);
	return (1);
}
