#include "main.h"

/**
 * _memcpy - This function copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

	for ( ; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
