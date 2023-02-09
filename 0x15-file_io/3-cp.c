#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
int close_file(int fl);
/**
 * main - Main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	int file1, file2, rd = 1, wrt;
	char ptr[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[1]);
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY | O_CREAT);
	if (file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(file1);
		exit(99);
	}
	while (rd)
	{
		rd = read(file1, ptr, 1024);
		if (rd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_file(file1);
			close_file(file2);
			exit(98);
		}
		if (rd == 0)
			break;
		wrt = write(file2, ptr, rd);
		if (wrt < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(file1);
			close_file(file2);
			exit(99);
		}
	}
	close_file(file1);
	close_file(file2);
	return (1);
}
/**
 * close_file - Close files
 * @fl: file
 * Return: 1 on success
 */
int close_file(int fl)
{
	int cl;

	cl = close(fl);
	if (cl < 0)
	{
		dprintf(2, "Error: Can't close fd %i\n", cl);
		exit(100);
	}
	return (1);
}
