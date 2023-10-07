#include "main.h"
#include <stdlib.h>

/**
 * _memset - This function fills memory with a constant byte
 * @s: memory area
 * @b: char to copy
 * @n: number of bytes
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}


/**
 * _calloc - This function allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: the size of each element
 *
 * Return: a pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
