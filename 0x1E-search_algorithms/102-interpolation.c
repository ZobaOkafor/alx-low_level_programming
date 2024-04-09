#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;
	double f;

	if (array == NULL || size == 0)
		return (-1);

	while (array[low] < value && array[high] >= value)
	{
		f = (double)(high - low) / (array[high] -
			array[low]) * (value - array[low]);
		pos = low + (size_t)f;
		printf("Value checked array[%lu]", pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	if (array[low] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}

	printf("Value checked array[%lu] is out of range\n", low);
	return (-1);
}
