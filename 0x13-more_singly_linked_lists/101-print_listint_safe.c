#include "lists.h"

/**
 * find_listint_loop - This function finds the loop in a linked list
 * @head: pointer to the list
 *
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *faster = head;
	listint_t *slower = head;

	if (head == NULL)
		return (NULL);

	while (slower && faster && faster->next)
	{
		slower = slower->next;
		faster = faster->next->next;

		if (slower == faster)
		{
			slower = head;

			while (slower != faster)
			{
				slower = slower->next;
				faster = faster->next;
			}

			return (slower);
		}
	}

	return (NULL);
}


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
