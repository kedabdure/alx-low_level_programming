#include "hash_tables.h"

/**
 * hash_table_set - Add a new item to the hash table
 * @ht: Hash table to store the items
 * @key: Key used to find the index
 * @value: Data to store at that index
 *
 * Return: If success - 1
 *         Otherwise - 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] != NULL)
	{
		hash_node_t *temp = ht->array[index];
		
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	ht->array[index] = new_node;

	return (1);
}
