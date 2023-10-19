#include "lists.h"

/**
 * add_note - This function adds a new node at the beginning of a list
 * @head: pointer to the head of the node
 * @str: data to add
 *
 * Return: the address of the new element,
 * or NULL if addition fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t* new;

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
	new->next = *head;

	*head = new;

	return (new);
}
