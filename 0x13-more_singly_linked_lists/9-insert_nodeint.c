#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a new node,
 * at a given position
 * @head: pointer to the list
 * @idx: index where the new node is to be added
 * @n: data
 *
 * Return: the address of node the new nud or NULL ifit fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp = *head;
	unsigned int count = 0;

	if (idx == 0)
	{
		new = (listint_t *)malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = tmp;
		*head = new;
		return (new);
	}

	while (tmp != NULL && count < (idx - 1))
	{
		tmp = tmp->next;
		count++;
	}

	if (tmp == NULL)
		return (NULL);

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
