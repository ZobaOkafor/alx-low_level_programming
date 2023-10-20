#include "lists.h"

/**
 * free_list - This function frees a list
 * @head: pointer to the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
