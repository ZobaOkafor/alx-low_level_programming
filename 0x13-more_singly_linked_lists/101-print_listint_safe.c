#include "lists.h"

/**
 * find_listint_loop_len - This function finds the loop in a linked list
 * @head: pointer to the list
 *
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop
 */

size_t find_listint_loop_len(const listint_t *head)
{
	const listint_t *faster = head;
	const listint_t *slower = head;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slower = head->next;
	faster = (head->next)->next;

	while (faster)
	{

		if (slower == faster)
		{
			slower = head;

			while (slower != faster)
			{
				count++;
				slower = slower->next;
				faster = faster->next;
			}

			slower = slower->next;
			while (slower != faster)
			{
				count++;
				slower = slower->next;
			}

			return (count);
		}
		slower = slower->next;
		faster = (faster->next)->next;
	}

	return (0);
}


/**
 * print_listint_safe - This function prints a linked list
 * @head: pointer to the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	size_t idx = 0;

	count = find_listint_loop_len(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < count; idx++)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
