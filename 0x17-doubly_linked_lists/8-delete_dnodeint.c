#include "lists.h"


/**
 * delete_dnodeint_at_index - This function deletes the node
 * at an index of a linked list
 * @head: double pointer to the head of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if successful, -1 if unsuccessful
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *cur; /*@cur means current*/
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	cur = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (cur == NULL)
			return (-1);
		cur = cur->next;
	}

	tmp = cur->prev;
	tmp->next = cur->next;

	if (cur->next != NULL)
		cur->next->prev = tmp;

	free(cur);
	return (1);
}
