#include "main.h"

/**
 * array_range - This function creates an array of integers
 * @min: minimun range of stored values
 * @max: maximum range of stored values and number of elements
 *
 * Return: a pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = calloc(size, sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min++;
		i++;
	}

	return (ptr);
}
