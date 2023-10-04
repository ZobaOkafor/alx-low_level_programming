#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - This function creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to initialize
 *
 * Return: pointer to the array if successful, if not return NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = (char *) malloc(size * sizeof(char));

	if (ar == NULL)
		return (0);

	while (i < size)
	{
		*ar[i] = c;
		i++;
	}

	*ar[i] = '\0';

	return (ar);
}
