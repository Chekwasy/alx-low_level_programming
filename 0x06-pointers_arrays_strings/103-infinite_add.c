#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the resul\
t.
*         If r cannot store the sum - 0.
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *str_add(char *r);

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1len = strlen(n1) - 1;
	int n2len = strlen(n2) - 1;
	int c, a, carry = 0;
	char tst, n1val, n2val;

	if (n1len  >= n2len)
		a = n1len;
	else
		a = n2len;
	if (size_r < a + 2)
		return (0);
	for (c = 0; c <= a; c++, n1len--, n2len--)
	{
		if (n1len >= 0 || n2len >= 0)
		{
			n2val = (*(n2 + n2len) - 48);
			n1val = (*(n1 + n1len) - 48);
			if (n2len < 0)
				n2val = 0;
			if (n1len < 0)
				n1val = 0;
			tst = n1val + n2val + carry;

			r[c] = (tst % 10) + 48;
			carry = tst / 10;
		}
	}
	if (((carry == 0 && (a + 1) < size_r) && n1len != n2len) ||
	    (carry > 0 && (a + 2) ==  size_r))
		return (0);
	if (carry > 0)
	{
		r[c] = carry + 48;
		r[c + 1] = '\0';
	}
	else
		r[c] = '\0';
	return (str_add(r));
}

/**
 * str_add - rev output.
 * @r: The buffer to store the result.
 *
 * Return: reversed string
 *         If r cannot store the sum - 0.
 */

char *str_add(char *r)
{
	int e, t;
	char sb[1000];
	int rlen = strlen(r);

	t = rlen / 2;
	for (e = 0; e < t; e++)
	{
		sb[e] = r[e];
		r[e] = r[rlen - 1 - e];
		r[rlen - 1 - e] = sb[e];
	}
	return (r);
}
