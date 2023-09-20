#include "main.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the resulting string (dest)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*dest != '\0')
		i++;

	while (*src != '\0')
	{
		*dest = *src;
		i++;
	}
	*dest = '\0';

	return (dest);
}
