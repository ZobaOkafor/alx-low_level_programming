#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end of a list
 * @head: pointer to the head of the node
 * @str: data to add
 *
 * Return: the address of the new element,
 * or NULL if addition fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		tail = *head;

		while (tail->next != NULL)
			tail = tail->next;

		tail->next = new;
	}

	return (new);
}
