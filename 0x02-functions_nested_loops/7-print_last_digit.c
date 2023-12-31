#include "main.h"

/**
 * print_last_digit - This function prints the last digit of a number.
 *
 * @n: The character to check.
 *
 * Return: the value of last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}
