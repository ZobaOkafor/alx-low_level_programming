#include "main.h"

/**
 * _isalpha - This function checks for alphabetic character.
 *
 * @c: The character to check, in ASCII code.
 *
 * Return: 1 if character is a letter, lowercase or uppercase,
 * else return 0.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
