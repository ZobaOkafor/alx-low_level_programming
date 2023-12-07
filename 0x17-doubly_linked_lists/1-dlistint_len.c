#include "lists.h"

/**
 * dlistint_len - This function returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements 
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
