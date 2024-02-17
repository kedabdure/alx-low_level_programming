#include "hash_tables.h"

/**
 * hash_table_print - Print the hash table.
 * @ht: Pointer to the hash table.
 * 
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *current;
	int comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (comma_flag)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			comma_flag = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
