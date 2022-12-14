#include "main.h"
/**
 * _islower - Check description
 * Description: It prints the alphabet in lowercase fall
 * @c -  input parameter
 * d by a new line
 * Return: Nothing.
 */
int _islower(int c)
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
return (res);
}
