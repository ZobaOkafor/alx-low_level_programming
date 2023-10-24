#include "lists.h"


/**
 * free_slists2 - This function frees a linked list
 * @head: pointer to the list
 *
 * Return: nothing
 */

void free_slists2(slists_t **head)
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
 * free_listint_safe - This function frees a linked list
 * @h: pointer to the list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *cur_node;
	slists_t *add, *new, *ptr;

	ptr = NULL;

	while (*h != NULL)
	{
		new = (slists_t *)malloc(sizeof(slists_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_slists2(&ptr);
				return (count);
			}
		}

		cur_node = *h;
		*h = (*h)->next;
		free(cur_node);
		count++;
	}

	*h = NULL;
	free_slists2(&ptr);

	return (count);
}
