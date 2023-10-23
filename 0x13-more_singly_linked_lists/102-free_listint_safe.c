#include "lists.h"

/**
 * free_listint_safe - This function frees a linked list
 * @h: pointer to the list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *next;

	while (*h != NULL)
	{
		next = (*h)->next;
		free(*h);
		*h = next;
		count++;
	}

	*h = NULL;

	return (count);
}
