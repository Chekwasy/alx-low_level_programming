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
	int **res;
	int *nm1;
	int *nm2;
	int len1, l = 1;
	int len2, uslen, len3;
	int a, b, c;
	int rem = 0;
	int chk;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
		return;
	}
	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);
	if (len1 >= len2)
	{
		num1 = argv[1];
		num2 = argv[2];
	}
	else
	{
		len1 = strlen(argv[2]);
		len2 = strlen(argv[1]);
		num1 = argv[2];
		num2 = argv[1];
	}
	nm1 = malloc(sizeof(int) * len1);
	nm2 = malloc(sizeof(int) * len2);
	if (num1 == NULL || num2 == NULL)
		return;
	for (a = 0; a < len1; a++)
	{
		chk = *(num1 + a) - 48;
		if (chk < 0 || chk > 9)
		{
			printf("Error\n");
			exit(98);
			return;
		}
		nm1[a] = chk;
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
		nm2[a] = chk;
	}
	res = calloc(len3, sizeof(int *));
	if (res == NULL)
		return;
	len3 = len1 + len2;
	for (a = 0; a < len3; a++)
	{
		res[a] = calloc((len2 + 1), sizeof(int));
		if (res[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(res[a]);
				free(res);
				return;
			}
		}
	}
	c = 0;
	uslen = len3 - 1;
	b = (len2 - 1);
	for (; b >= 0; b--)
	{
		l++;
		a = len1 - 1;
		for (; a >= 0; a--)
		{
			//printf("b = %d a = %d\n", b, a);
			chk = (nm2[b] * nm1[a]) + rem;
			rem = 0;
			//printf("chk = %d\n", chk);
			if (chk / 10 != 0)
				rem = rem + (chk / 10);
			else
				rem = 0;
			//printf("rem = %d\n", rem);
			res[uslen][c] = chk % 10;
			//printf("%d", res[uslen][c]);
			uslen--;
		}
		res[uslen][c] = rem;
		//printf("%d", res[uslen][c]);
		rem = 0;
		//printf("\n");
		c++;
		uslen = len3 - l;
	}
	a = len3 - 1;
	rem = 0;
	chk = 0;
	for (; a >= 0; a--)
	{
		for (b = 0; b < len2; b++)
		{
			chk += res[a][b];
			//printf("%d", res[a][b]);
		}
		chk = chk + rem;
		if (chk > 9)
		{
			res[a][len2] = chk % 10;
			rem = chk / 10;
		}
		else
		{
			res[a][len2] = chk;
			rem = 0;
		}
		//printf("%d", res[a][len2]);
		chk = 0;
	}
	//printf("\n");
	for (a = 0; a < len3; a++)
	{
		if (res[a][len2] != 0 && a == 0)
			printf("%d", res[a][len2]);
		if (a != 0)
			printf("%d", res[a][len2]);
	}
	printf("\n");
}
