#include "lists.h"
/**
 * dlistint_len - length of list
 * @h: pointer to the first node
 * Return: total number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h && ++n)
		h = h->next;
	return (n);
}
