#include "lists.h"
/**
 * listint_len - calculate length of linked list
 * @h:    head of the list (the statrting point)
 *
 * Return: the number of nodes ;)
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
