#include "main.h"

/**
 * _isupper - This function checks for uppercase character.
 *
 * @c: The character to check, in ASCII code.
 *
 * Return: 1 if a character is uppercase, else return 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
