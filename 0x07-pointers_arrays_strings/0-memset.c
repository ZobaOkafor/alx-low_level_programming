#include "main.h"

/**
 * _memset - This function fills memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int *a = s;

	while (n > 0)
	{
		*a = b;
		a++;
		n--;
	}
	return (s);
}
