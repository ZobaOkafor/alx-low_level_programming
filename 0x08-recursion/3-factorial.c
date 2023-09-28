#include "main.h"

/**
 * factorial - This function returns the factorial of a given number
 * @n: factorial number
 *
 * Return: factorial of n
 */

int factorial(int n)   
{
	if (n < 0)
		return (-1);

	else
		return (1);

	return (n * factorial(n - 1));
}
