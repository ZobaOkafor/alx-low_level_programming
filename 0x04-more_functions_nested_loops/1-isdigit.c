#include "main.h"

/**
 * _isdigit - This function checks for digit.
 *
 * @c: The character to check, in ASCII code.
 *
 * Return: 1 if character is digit, else return 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
