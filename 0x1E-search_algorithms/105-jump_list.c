#include "search_algos.h"



void free_list(listint_t *list);

/**
 * create_list - Creates a single linked list
 *
 * @array: Pointer to the array to use to fill the list
 * @size: Size of the array
 *
 * Return: A pointer to the head of the created list (NULL on failure)
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *list;
	listint_t *node;

	list = NULL;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_list(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->next = list;
		list = node;
	}
	return (list);
}


/**
 * free_list - Deallocates a singly linked list
 *
 * @list: Pointer to the linked list to be freed
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}


/**
 * print_list - Prints the content of a listint_t
 *
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
	printf("List :\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}



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



/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	listint_t *list, *res;
	int array[] = {
		0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	list = create_list(array, size);
	print_list(list);

	res =  jump_list(list, size, 53);
	printf("Found %d at index: %lu\n\n", 53, res->index);
	res =  jump_list(list, size, 2);
	printf("Found %d at index: %lu\n\n", 2, res->index);
	res =  jump_list(list, size, 999);
	printf("Found %d at index: %p\n", 999, (void *) res);

	free_list(list);
	return (EXIT_SUCCESS);
}