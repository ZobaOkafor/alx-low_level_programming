#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present in list
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *prev = NULL, *current = list;

	if (list == NULL)
		return (NULL);

	while (current != NULL && current->n < value)
	{
		prev = current;
		for (size_t i = 0; current->next != NULL && i < step; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, current->index);
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

	while (prev != NULL && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}

	if (prev != NULL && prev->n == value)
		return (prev);

	return (NULL);
}
