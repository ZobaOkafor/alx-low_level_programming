#include "main.h"

/**
 *print_sign - This function prints the sign ofma number.
 *
 * @n: The character to check, in ASCII code.
 *
 * Return: 1 if greater than zero, 0 if is zero, -1 if less than zero.
 */

int print_sign(int n)
{	
	if (n > 0)
	{
		return (1);
		_putchar(+);
	}
	if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	else
	{
		return (-1);
		_putchar(-);
	}
	_putchar('\n');
}
