#include "lists.h"
/**
 * free_listint_safe - safely frees a linked list
 * @h: the head of the list (the statrting point)
 *
 * Return: the number of nodes ;)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *push = NULL;

	if (h)
		push = *h;

	while (push)
	{
		push = (*h)->next;
		free(*h);
		i++;
		if (*h > push)
			*h = push;
		else
			*h = push = NULL;
	}

	return (i);
}
