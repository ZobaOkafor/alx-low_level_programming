#include "lists.h"

/**
 * add_dnodeint - This function adds a new node at the beginning of a list
 * @head: double pointer to the head of the list
 * @n: new node to add
 *
 * Return: address of the new node or NULL if unsuccessful
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new-> = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
