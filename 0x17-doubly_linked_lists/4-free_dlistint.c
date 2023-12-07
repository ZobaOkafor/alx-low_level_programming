#include "lists.h"

/**
 * free_dlistint - This function frees a list
 * @head: double pointer to the head of the list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	dlistint_t *next;

	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
}
