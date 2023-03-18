#include <stdio.h>
#include <unistd.h>
/**
 * main - main funtion to getpid
 *
 * return: integer
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}
