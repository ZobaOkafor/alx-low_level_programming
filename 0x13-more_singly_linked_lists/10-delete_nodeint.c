#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes a node,
 * at a given index in a linked list
 * @head: pointer to the list
 * @index: index where the new node is to be deleted
 *
 * Return: 1 if successful or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur_node = *head;
	listint_t *tmp;
	unsigned int count = 0;

	if (cur_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = cur_node->next;
		free(cur_node);
		return (1);
	}

	while (cur_node != NULL && count < (index - 1))
	{
		cur_node = cur_node->next;
		count++;
	}

	if (cur_node == NULL || cur_node->next == NULL)
		return (-1);

	tmp = cur_node->next;
	cur_node->next = tmp->next;
	free(tmp);

	return (1);
}
