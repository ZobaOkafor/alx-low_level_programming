#include "lists.h"

/**
 * list_len - This function returns the number of elements in a list
 * @h: linked list
 *
 * Return: no of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	printf("\n");

	return (len);
}
