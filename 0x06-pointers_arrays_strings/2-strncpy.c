#include "main.h"

/**
 * _strncpy - This function copies a  string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: a pointer to the resulting string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (i = 0; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
