#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - This function executes another functio
 * given as a parameter on each element of an array
 * @array: array to iterate
 * @size: array size
 * @action: function pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!(array && action))
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
