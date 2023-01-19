#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: multiply
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: mudule
 */
int op_mod(int a, int b)
{
	return (a % b);
}
