#include "main.h"

int findroot(int n, int root);

/**
 * findroot - Finds the natural square root of an inputted number.
 * @n: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int findroot(int n, int root)
{
	if (root == n)
		return (-1);
	if (root * root == n)
		return (root);
	findroot(n, root + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (findroot(n, root));
}
