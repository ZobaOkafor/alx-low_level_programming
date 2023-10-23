#include "lists.h"

/**
 * pop_listint - This function deletes the head node of a linked list
 * @head: pointer to the head of the node
 *
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int hnode;

	if (*head == NULL)
		return (0);

	hnode = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (hnode);
}
