#include "lists.h"

/**
 * sum_listint - This function returns the sum of all the data of a linked list
 * @head: pointer to the list
 *
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *num;
	int sum = 0;

	num = head;

	while (num != NULL)
	{
		sum += num->n;
		num = num->next;
	}

	return (sum);
}
