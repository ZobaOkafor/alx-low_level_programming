#include "lists.h"

/**
 * get_dnodeint_at_index - This function returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the nth node
 *
 * Return: NULL if index doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cur = head; /*@cur means current*/

	while (cur != NULL)
	{
		if (i == index)
			return (cur);

		cur = cur->next;
		i++;
	}

	return (NULL);
}
