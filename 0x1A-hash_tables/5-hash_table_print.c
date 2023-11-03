#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *head;
	char *prefix = "";

	if (ht == NULL)
		return;

	putchar('{');
	while (i < ht->size)
	{
		head = ht->array[i];
		while (head)
		{
			printf("%s'%s': '%s'", prefix, head->key, head->value);
			head = head->next;
			prefix = ", ";
		}
		i++;
	}
	putchar('}');
	putchar('\n');
}
