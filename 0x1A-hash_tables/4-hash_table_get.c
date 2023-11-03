#include "hash_tables.h"
/**
 * hash_table_get - get a value from a table
 * @key: the key of the value
 * @ht: the table to get the value from
 * Return: the needed value if found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *head;

	if (!(ht || ht->size || key || *key))
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	head = ht->array[idx];
	while (head)
	{
		if (_strcmp(key, head->key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}


/**
 * _strcmp - easier than including string.h
 * @s1: first string
 * @s2: second string
 * Return: the first diff or 0 if no diff
 */
int _strcmp(const char *s1, const char *s2)
{
	if (!(s1 && s2))
		return (-1);

	while (*s1 && *s2 && (*s1 - *s2) == 0)
		s1++, s2++;

	return (*s1 - *s2);
}
