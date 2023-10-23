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
