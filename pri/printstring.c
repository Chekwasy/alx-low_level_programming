#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *str;
	int i = 1;

	while (av[i])
	{
		str = av[i];
		printf("%s ", str);
		i++;
	}
	printf("\n");
	return (0);
}
