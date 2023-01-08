#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */

/**
 * _checkchange - Running change with loop
 * Description: It tells if lower case
 * @n: - An input parameter
 * @c: - Another input parameter
 * @val: - last input parameter
 * Return: 1 when true and 0 when false
 */
int main(int argc, char *argv[]);
int checkchange(int *n, int *c, int val);
int _checkchange(int *n, int *c, int val)
{
	if (*n >= val)
	{
		if ((*n % val) == 0)
		{
			*c = *c + (*n / val);
			printf("%d\n", *c);
			return (0);
		}
		else
		{
			*c = *c + (*n / val);
			*n = *n % val;
		}
	}
	return (1);
}
int main(int argc, char *argv[])
{
	int num;
	int a;
	int count;
	int arr[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	num = atoi(argv[1]);
	count = 0;
	for (a = 0; a < 5; a++)
	{
		if ((_checkchange(&num, &count, arr[a])) == 0)
		{
			break;
		}
	}
	return (0);
}
