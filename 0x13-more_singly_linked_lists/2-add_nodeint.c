#include "lists.h"

/**
 * add_nodeint - This function adds a new node at the beginning of a list
 * @head: pointer to the head of the node
 * @n: data to add
 *
 * Return: the address of the new element,
 * or NULL if addition fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
