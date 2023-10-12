#include "lists.h"
/**
 * free_dlistint - double-linked
 * @h: pointer to the first node
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *move;

	while (h && h->prev)
		h = h->prev;

	while (h)
	{
		move = h->next;
		free(h);
		h = move;
	}
}
