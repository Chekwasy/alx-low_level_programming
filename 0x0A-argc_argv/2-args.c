#include <stdio.h>
#include "main.h"
/**
 * main - Check description                                 * Description: It tells if lower case
 * @argc: - An input parameter
 * @argv: - Another parameterd
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i ++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
