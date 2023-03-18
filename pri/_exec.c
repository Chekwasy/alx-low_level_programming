#include "main.h"
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * _exec - Print "$ " first with the string after it on next
 * @str: para
 * Return: Always 0.
 */
int _exec(char *str)
{
	pid_t child_pid;
	int status, i;
	char *string;
	char *argv[] = {NULL, NULL};

	string = str;
	while (string[i] != '\n')
		i++;
	string[i] = '\0';
	argv[0] = string;
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
			printf("Error!!\n");
	}
	else
	{
		wait(&status);
	}
	return (0);
}
