#include "lists.h"

/**
 * print_listint_safe - This function prints a linked list
 * @head: pointer to the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = head;
	size_t count = 0;

	while (tmp != NULL)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;

		if (tmp <= tmp->next)
		{
			printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
			exit(98);
		}
		tmp = tmp->next;
	}

	return (count);
}
