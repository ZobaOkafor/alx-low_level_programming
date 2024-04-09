#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int i, step;
	int prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size); /* Jump step size */

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

	while (array[step] < value && step < (int)size)
	{
		prev = step;
		step += sqrt(size);
		if (step < (int)size)
			printf("Value checked array[%d] = [%d]\n", step, array[step]);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	for (i = prev; i <= (step < (int)size ? step : size - 1); i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
