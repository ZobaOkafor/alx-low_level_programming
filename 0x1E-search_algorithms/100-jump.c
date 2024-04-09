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
	int m, k = 0;
	int prev = 0;
	int index = 0;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);

		prev = index;
		index = k * m;
		k++;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (prev = 0; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
