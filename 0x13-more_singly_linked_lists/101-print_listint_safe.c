#include "lists.h"

/**
 * free_slists - This function frees a linked list
 * @head: pointer to the list
 *
 * Return: nothing
 */

void free_slists(slists_t **head)
{
	slists_t *cur_node;
	slists_t *tmp;

	if (head != NULL)
	{
		cur_node = *head;

		while ((tmp = cur_node) != NULL)
		{
			cur_node = cur_node->next;
			free(tmp);
		}

		*head = NULL;
	}
}


/**
 * print_listint_safe - This function prints a linke list
 * @head: pointer to the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	slists_t *add, *new, *h;
	size_t count = 0;

	h = NULL;

	while (head != NULL)
	{
		new = (slists_t *)malloc(sizeof(slists_t));

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
