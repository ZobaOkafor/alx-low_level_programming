#include "lists.h"

/**
 * list_len - This function returns the number of elements in a list
 * @h: linked list
 *
 * Return: no of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	printf("\n");

	return (len);
}


int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}
