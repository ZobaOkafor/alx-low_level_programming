#include "lists.h"

/**
 * print_listint - This function prints all the elements of a list
 * @h: list to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	int len;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->n);

		h = h->next;
		count++;
	}

	return (count);
}
