#include "main.h"

/**
 * actual_sqrt_recursion - This function recurses to find
 * the natural square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	
	else if (i * i == n)
		return (i);
	
	return (actual_sqrt_recursion(n, i + 1));
}


/**
 * _sqrt_recursion -  This function returns
 * the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	
	return (actual_sqrt_recursion(n, 0));
}
