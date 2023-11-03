#include "hash_tables.h"
/**
 * key_index - Get the index of a key
 * @key: a key of a hash table
 * @size: the size of our beloved array
 * Return: the index at which the value of the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	if (size)
		return (hash % size);
	else
		return (0);
}
