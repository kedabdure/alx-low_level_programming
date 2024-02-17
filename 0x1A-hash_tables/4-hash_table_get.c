#include "hash_tables.h"

/**
 * hash_table_get - Get the value by key in the hash table.
 * @ht: The hash table to search.
 * @key: The key to retrieve the value.
 *
 * Return: The value associated with the element, or
 *         NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
