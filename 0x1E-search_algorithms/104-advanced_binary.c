#include "search_algos.h"

/**
 * print_array - Prints the elements of an array
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");

	for (i = 0; i < size; ++i)
		printf("%s %d", (i == 0) ? "" : ",", array[i]);

	printf("\n");
}

/**
 * rec_search - Recursively searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array
 * @low: The lowest index of the range to search in
 * @high: The highest index of the range to search in
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int rec_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low <= high)
	{
		mid = low + (high - low) / 2;

		print_array(array + low, high - low + 1);

		if (array[mid] == value)
		{
			if (mid == low || array[mid - 1] != value)
				return (mid);
			else
				return (rec_search(array, low, mid, value));
		}
		else if (array[mid] < value)
			return (rec_search(array, mid + 1, high, value));
		else
			return (rec_search(array, low, mid - 1, value));
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using a modified binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (rec_search(array, 0, size - 1, value));
}
