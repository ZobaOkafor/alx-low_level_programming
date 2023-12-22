#include "hash_tables.h"


/**
 * shash_table_create - This function creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the created hash table, or NULL on failure
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}


/**
 * shash_table_set - This function adds or updates an element to a
 * sorted hash table.
 * @ht: Pointer to the sorted hash table.
 * @key: The key to add or update.
 * @value: The key value.
 *
 * Return: 1 on success, 0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1); }
		current = current->next; }
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead = new_node; }
	else
	{
		current = ht->shead;
		while (current->snext != NULL && strcmp(key, current->snext->key) > 0)
			current = current->snext;

		new_node->sprev = current;
		new_node->snext = current->snext;
		if (current->snext != NULL)
			current->snext->sprev = new_node;
		current->snext = new_node;
	}
	return (1);
}


/**
 * shash_table_get - This function retrieves the value associated with a key.
 * @ht: Pointer to the sorted hash table
 * @key: The key to retrieve
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	return (NULL);
}


/**
 * shash_table_print - This function prints the hash table using
 * the sorted linked list.
 * @ht: Pointer to the sorted hash table.
 *
 * Return: Nothing.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext != NULL)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - This function prints the hash table in
 * reverse order using the sorted linked list.
 * @ht: Pointer to the sorted hash table.
 *
 * Return: Nothing.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->stail;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev != NULL)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - This function deletes a sorted hash table.
 * @ht: Pointer to the sorted hash table to be deleted.
 *
 * Return: Nothing.
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *next;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current != NULL)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}

	free(ht->array);
	free(ht);
}
