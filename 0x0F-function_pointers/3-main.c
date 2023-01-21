#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error1\n");
		exit(98);
		return (1);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if ((num2 == 0 && *operator == '%') ||
	    (num2 == 0 && *operator == '/'))
		{
			printf("Error2\n");
			exit(100);
			return (1);
		}
	if (get_op_func(operator) == NULL)
	{
		printf("Error3\n");
		exit(99);
		return (1);
	}
	else
	{
		printf("%d\n", get_op_func(operator)(num1, num2));
	}
	return (0);
}
