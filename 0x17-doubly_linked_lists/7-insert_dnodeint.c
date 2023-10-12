#include "lists.h"
/**
 * insert_dnodeint_at_index - in a doubly linked list
 * @h: the node at  index 0
 * @idx: to insert the node in
 * @n: the number inside the new node
 * Return: pointer to the new node
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
		if (prev)
			prev->next = new;
		if (head)
		{
			new->prev = head->prev;
			head->prev = new;
		}
		if (*h == head)
			*h = new;
	}
	return (new);
}
