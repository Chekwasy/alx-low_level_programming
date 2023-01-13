#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints buffer in hexa
 * @argc: the address of memory to print
 * @argv: the size of the memory to pr
 * Return: Nothing.
 */
void main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int len1;
	int len2;
	int a;
	int chk;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
		return;
	}
	len1 = strlen(argv[1]);
	len2 = strlen(arg[2]);
	num1 = argv[1];
	num2 = argv[2];
	for (a = 0; a < len1; a++)
	{
		chk = *(num1 + a) - 48;
		if (chk < 0 || chk > 9)
		{
			printf("Error\n");
			exit(98);
			return;
		}
	}
	for (a = 0; a < len2; a++)
	{
		chk = *(num2 + a) - 48;
		if (chk < 0 || chk > 9)
		{
			printf("Error\n");
			exit(98);
			return;
		}
	}
	if (len1 >= len2)
	printf("%c\n", *(s + 2));
}
