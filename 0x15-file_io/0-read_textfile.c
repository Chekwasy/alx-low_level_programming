#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int chkfile, wrt, rd;
	char *ptrf;

	if (filename == NULL)
		return (0);
	chkfile = open(filename, O_RDONLY);
	if (chkfile < 0)
		return (0);
	ptrf = malloc(sizeof(char) * letters);
	if (ptrf == NULL)
	{
		free(ptrf);
		return (0);
	}
	rd = read(chkfile, ptrf, letters);
	wrt = write(STDOUT_FILENO, ptrf, rd);
	if (wrt < 0)
		return (0);
	free(ptrf);
	close(chkfile);
	return ((ssize_t)wrt);
}
