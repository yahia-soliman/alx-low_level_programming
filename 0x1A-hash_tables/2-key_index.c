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
