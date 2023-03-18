#include "main.h"
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
	pid_t child_pid;
	int status, i;
	char *string;
	char *argv[] = {NULL, NULL};
	size_t n = 20;
	ssize_t num_char;
	char *ptr;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("#cisfun$ ");
		ptr = malloc(sizeof(char) * n);
		num_char = getline(&ptr, &n, stdin);
		if (num_char == -1)
		{
			free(ptr);
			exit(EXIT_FAILURE);
		}
		string = ptr;
		i = 0; /* added */
		while (string[i])
		{
			if (string[i] == '\n')
			{
				string[i] = 0;
				break;
			}
			i++;
		}

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
				printf("./shell: No such filor directory\n");
		}
		else
		{
			wait(&status);
			/*argv[0] = "./shell";
                        if (execve(argv[0], argv, NULL) == -1)
			printf("Error!!\n");*/
		}
	}
	exit(0);
}
