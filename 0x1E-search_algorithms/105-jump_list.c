#include "search_algos.h"
#include <math.h>

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
	size_t i, jump = sqrt(size);
	listint_t *temp, *prev = NULL, *current = list;

	if (list == NULL)
		return (NULL);

	do {
		prev = current;
		for (i = 0; i < jump && current->next != NULL; i++)
			current = current->next;

		printf("Value checked at index [%d] = [%d]\n",
			(int)current->index, current->n);

		if (current->n >= value || current->next == NULL)
			break;
	} while (current != NULL);

	printf("Value found between indexes [%d] and [%d]\n",
		(int)prev->index, (int)current->index);

	for (temp = prev; temp != NULL && temp->index <= current->index;
		temp = temp->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)temp->index, temp->n);
		if (temp->n == value)
			return (temp);
	}

	return (NULL);
}
