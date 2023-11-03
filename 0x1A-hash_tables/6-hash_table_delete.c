#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *head, *next;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		head = ht->array[i];
		while (head)
		{
			free(head->key);
			free(head->value);
			next = head->next;
			free(head);
			head = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
