#include "lists.h"
/**
 * print_listint_safe - safely prints a linked list
 * @h:   the head of the list (the statrting point)
 *
 * Return: the number of nodes ;)
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		if (h > h->next)
			h = h->next;
		else
			h = NULL;
	}

	return (i);
}
