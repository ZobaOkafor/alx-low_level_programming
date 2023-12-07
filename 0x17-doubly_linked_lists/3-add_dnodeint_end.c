#include "lists.h"


/**
 * add_dnodeint_end - This function adds a new node at the end of a list
 * @head: double pointer to the head of the list
 * @n: new node to add
 *
 * Return: the address of the new element or NULL if unsuccessful
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last_node = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new;
	new->prev = last_node;

	return (new);
}
