#include "main.h"
/**
 * _islower - Check description
 * Description: It tells if lower case
 * @c: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */
int _isalpha(int c)
{
	char a;
	int res = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
		{
			res = 1;
		}
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
		{
			res = 1;
		}
	}
	return (res);
}
