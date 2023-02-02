#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void dmain(unsigned long int n);
/**
 * print_binary - function to print binary value of decimal
 * @n: parameter to print its binary value
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	dmain(n);
}
/**
 * dmain - function to print binary value of decima\
l
* @n: parameter to print its binary value
*
* Return: Nothing.
*/
void dmain(unsigned long int n)
{
	if (n == 0)
		return;
	dmain(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
