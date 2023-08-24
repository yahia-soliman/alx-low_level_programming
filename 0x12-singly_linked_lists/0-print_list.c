#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all element of a linked list
 * @h:          pointer to the first node of a list
 * Return:		number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		count++;
		h = h->next;
	}
	return (count);
}
