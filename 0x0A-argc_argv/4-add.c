#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Check description
 * Description: It tells if lower case
 * @argc: - An input parameter
 * @argv: - Another parameterd
 * Return: 0
 */

int main(int argc, char *argv[])
{                                                                 int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{

			if (atoi(argv[i]))
			{
				sum = sum + (atoi(argv[i]));
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
		return (0);
}
