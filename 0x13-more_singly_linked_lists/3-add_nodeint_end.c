#include "lists.h"

/**
 * add_nodeint_end - This function adds a new node at the end of a list
 * @head: pointer to the head of the node
 * @n: data to add
 *
 * Return: the address of the new element,
 * or NULL if addition fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tail;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		tail = *head;

		while (tail->next != NULL)
			tail = tail->next;

		tail->next = new;
	}

	return (new);
}
