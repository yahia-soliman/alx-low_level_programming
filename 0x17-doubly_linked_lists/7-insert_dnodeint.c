#include "lists.h"
/**
 * insert_dnodeint_at_index - in a doubly linked list
 * @head: the node at index 0
 * @index: of the wanted node
 * Return: the node at the given index if found
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head, *prev;

	new = head = prev = NULL;
	if (h)
		head = *h;

	while (head && idx > 0)
	{
		prev = head;
		head = head->next;
		idx--;
	}
	if (h && idx == 0)
		new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->prev = prev;
		new->next = head;
		prev->next = new;
		if (head)
			head->prev = new;
		else if (prev == NULL)
			*h = new;
	}
	return (new);
}
