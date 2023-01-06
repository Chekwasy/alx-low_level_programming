#include "main.h"
/**
 * _abs - Check description
 * Description: It tells if lower case
 * @n: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */
int _abs(int n)
{
	int res;
		if (n <= 0)
	{
		res = n * -1;
	}
	if (n > 0)
	{
		res = n * 1;
	}
	return (res);
}
