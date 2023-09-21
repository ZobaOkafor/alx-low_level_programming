#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters of a string to uppercase 
 * *: all strings to be changed
 *
 * Return: no return
 */

char *string_toupper(char *)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (i >= 'a' && i <= 'z')
			i = i - 32;
	}
}
