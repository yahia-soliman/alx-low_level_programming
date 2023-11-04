#include "hash_tables.h"
char *_strdup(const char *str);
int check_for_modify(hash_node_t *head, const char *key, const char *value);
/**
 * hash_table_set - add a key/value pair to the hash table
 * @ht: the hash table to update
 * @key: the key to add
 * @value: the corresponding value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int idx, stat;

	if (ht == NULL || ht->size == 0 || key == NULL || *key == 0)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	stat = check_for_modify(ht->array[idx], key, value);
	if (stat < 2)
		return (stat);
	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
		return (0);
	node->key = _strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = _strdup(value);
	if (value && node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
/**
 * check_for_modify - modifies a key/value pair if a key exists
 * @head: the head of the key specific hash-node
 * @key: the key to find
 * @value: the new value
 * Return: 1 if a key existed and modified successfully
 */
int check_for_modify(hash_node_t *head, const char *key, const char *value)
{
	while (head)
	{
		if (_strcmp(key, head->key) == 0)
		{
			free(head->value);
			head->value = _strdup(value);
			return (1);
		}
		head = head->next;
	}
	return (2);
}

/**
 * _strdup - I was lazy to read man strdup
 * @str:  take a string
 * Return: a copy of it
 */
char *_strdup(const char *str)
{
	unsigned int n = 0;
	char *dup = NULL;

	if (str == NULL)
		return (NULL);

	while (str[n])
		n++;
	dup = malloc((++n) * sizeof(char));
	while (dup && n)
	{
		n--;
		dup[n] = str[n];
	}
	return (dup);
}
