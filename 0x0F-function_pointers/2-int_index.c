#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - This function searches for an integer
 * @array: array to search
 * @size: array size
 * @cmp: function pointer
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0, or -1 if no match is found or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
