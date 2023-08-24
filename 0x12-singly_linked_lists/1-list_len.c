#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - counts the nodes of a linked list
 * @h:        pointer to the first node of list
 * Return:    number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
