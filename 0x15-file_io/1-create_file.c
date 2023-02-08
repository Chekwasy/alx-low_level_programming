#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
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
	int fileRep, wrt, len = 0;

	if (filename == NULL)
		return (-1);
	fileRep = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fileRep < 0)
		return (-1);
	if (text_content == NULL)
		return (-1);
	len = strlen(text_content);
	wrt = write(fileRep, text_content, len);
	if (wrt < 0)
		return (-1);
	close(fileRep);
	return (1);
}
