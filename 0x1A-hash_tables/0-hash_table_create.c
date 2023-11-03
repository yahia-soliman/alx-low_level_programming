#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 * Return: a new empty hash table if one is created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * (size + 1));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array[size] = NULL;
	return (table);
}
