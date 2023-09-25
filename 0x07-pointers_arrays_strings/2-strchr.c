#include "main.h"

/**
 * _strchr - This function locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: s if character is  matched
 * or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
		if (*s == c)
			return (s);
		s++;

		else
			return (0);
}
