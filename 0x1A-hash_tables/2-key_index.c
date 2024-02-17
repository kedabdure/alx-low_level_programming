#include "hash_tables.h"

/**
 * key_index - Return the index of the key
 * @key: Key which is turned into a hash
 * @size: The size of the array in the hash table
 *
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
