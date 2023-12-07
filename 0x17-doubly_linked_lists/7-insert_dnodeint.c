#include "lists.h"


/**
 * insert_dnodeint_at_index - This function inserts a new node
 * at a given position
 * @h: double pointer to the head of the list
 * @idx: index where new node should be added
 * @n: new node to add
 *
 * Return: the address of the new node, or NULL unsuccessful
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *tmp;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	tmp = *h;
	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = tmp->next;
	new->prev = tmp;
	if (tmp->next != NULL)
		tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
