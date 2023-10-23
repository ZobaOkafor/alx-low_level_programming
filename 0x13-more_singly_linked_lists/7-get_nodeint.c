#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the nth node of a linked list
 * @head: pointer to the list
 * @index: the index
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *num;
	unsigned int count = 0;

	num = head;

	while (num != NULL)
	{
		if (count == index)
			return (num);

		num = num->next;
		count++;
	}

	return (NULL);
}
