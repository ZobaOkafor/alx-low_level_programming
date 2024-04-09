#include "search_algos.h"


/**
 * bbinary_search - Searches for a value in a sorted array of integers
 * using Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: The lowest index of the range to search in
 * @high: The highest index of the range to search in
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int bbinary_search(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}


/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, high, low;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	bound = 1;
	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (bbinary_search(array, low, high, value));
}
