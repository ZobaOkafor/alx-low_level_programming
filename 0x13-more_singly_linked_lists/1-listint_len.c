#include "lists.h"

/**
 * listint_len - This function returns the number of elements in a list
 * @h: linked list
 *
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
