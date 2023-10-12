#include "3-calc.h"

/**
 * op_add - Function that calculates the sum of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum of a & b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that calculates the difference of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: difference of a & b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that calculates the product of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: product of a & b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that calculates the division of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function that calculates the remainder of
 * the division of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
