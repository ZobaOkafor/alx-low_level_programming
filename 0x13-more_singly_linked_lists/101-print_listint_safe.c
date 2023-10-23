#include "lists.h"


/**
 * free_slists - This function frees a linked list
 * @head: pointer to the list
 *
 * Return: nothing
 */

void free_slists(slists_t **head)
{
	slists_t *tmp;
	slists_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}


/**
 * print_listint_safe - This function prints a linked list
 * @head: pointer to the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	slists_t *h, *new, *add;

	h = NULL;

	while (head != NULL)
	{
		new = malloc(sizeof(slists_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = h;
		h = new;

		add = h;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_slists(&h);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	free_slists(&h);
	return (count);
}
