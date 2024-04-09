#include "search_algos.h"

/**
 * advanced_binary_recursive - recursive helper function for advanced_binary
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: index of the number
 */
int advanced_binary_recursive(int *array, size_t size, int value)
{
	size_t i, mid = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (advanced_binary_recursive(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < array[mid])
		return (advanced_binary_recursive(array, mid + 1, value));

	mid++;
	return (advanced_binary_recursive(array + mid, size - mid, value) + mid);
}


/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using a modified binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Number of elements in array
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = advanced_binary_recursive(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
