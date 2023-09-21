#include "main.h"

/**
 * _strncat - This function concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: the n byte
 *
 * Return: a pointer to the resulting string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';

	return (dest);
}
