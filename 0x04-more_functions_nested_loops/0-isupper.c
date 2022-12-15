#include "main.h"
#include "main.h"
/**
 * _isupper - Check description
 * Description: It tells if upper case
 * @c: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */
int _isupper(int c)
{
	int n = 0;
	char a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
		{
			n = 1;
		}
	}
	return (n);
}
