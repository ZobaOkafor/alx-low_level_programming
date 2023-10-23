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
	listint_t *tmp;
	int i;

	if (h != NULL || *h != NULL)
		return (0);

	while (*h != NULL)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			count++;
		}

		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
