#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present in list
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express;

	if (list == NULL)
		return (NULL);

	express = list->express;
	while (express && express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		list = express;
		express = express->express;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		list->index, express ? express->index : list->index);

	while (list && list->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}

	if (list && list->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		return (list);
	}

	return (NULL);
}
