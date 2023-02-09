#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	int file1, file2, rd, wrt, cl1, cl2;
	char *ptr;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[1]);
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY | O_CREAT);
	if (file1 < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	ptr = malloc(sizeof(char) * 1024);
	if (ptr == NULL)
		return (0);
	rd = read(file1, ptr, 1024);
	if (rd < 0)
		return (0);
	wrt = write(file2, ptr, 1024);
	if (wrt < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cl1 = close(file1);
	if (cl1 < 0)
	{
		dprintf(2, "Error: Can't close fd %i\n", cl1);
		exit(100);
	}
	cl2 = close(file2);
	if (cl2 < 0)
	{
		dprintf(2, "Error: Can't close fd %i\n", cl2);
		exit(100);
	}
	free(ptr);
	return (1);
}
