#include "lists.h"

/**
 * print_list - This function prints all the elements of a list
 * @h: list to print
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	printf("[");

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);

		else
			printf("%d] %s\n", 0, "(nil)");

		h = h->next;
		count++;
	}

	return (count);
}
