#include "lists.h"


/**
 * sum_dlistint - This function sums all the data (n) of a linked list
 * @head: pointer to the head of the list
 *
 * Return: 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cur = head; /*@cur means current*/

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}

	return (sum);
}
