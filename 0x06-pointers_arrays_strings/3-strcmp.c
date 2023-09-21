#include "main.h"

/**
 * _strcmp - This function compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 and s2 is equal
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	if (*s1  == '\0' && *s2 != '\0')
		return (-1);
	else if (*s1 != '\0' && *s2 == '\0')
		return (1);
	else
		return (0);
}
