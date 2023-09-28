#include "main.h"

/**
 * actual_prime_number - This function recursively calculates
 * if a number is prime recursively
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if 'n' is prime, 0 if 'n' is not
 */

int actual_prime_number(int n, int i)
{
	if (i == 1)
		return (1);

	else if (n % i == 0 && i > 0)
		return (0);

	return (actual_prime_number(n, i - 1));
}

/**
 * is_prime_number - This function checks if an integer
 * is a prime number or not
 * @n: number to check
 *
 * Return: 1 if 'n' is a prime number, 0 if 'n' is not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (actual_prime_number(n, n - 1));
}
