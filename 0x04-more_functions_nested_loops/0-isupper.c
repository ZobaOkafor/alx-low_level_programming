#include "main.h"

/**
 * _isupper - This function checks for lowercase character.
 *
 * @c: The character to check, in ASCII code.
 *
 * Return: 1 if character is loercase, else return 0.
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
        _putchar('\n');
}
