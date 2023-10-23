#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes a node,
 * at a given index in a linked list
 * @head: pointer to the list
 * @index: index where the new node is to be deleted
 *
 * Return: the address of node the new nud or NULL ifit fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *new;
        listint_t *tmp = *head;
        unsigned int count = 0;
