#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @h:      the head of the list (the statrting point)
 *
 * Return: the number of nodes ;)
 */
listint_t *find_listint_loop(listint_t *h)
{
	while (h)
	{
		if (h > h->next)
			h = h->next;
		else
			return (h->next);
	}

	return (NULL);
}
