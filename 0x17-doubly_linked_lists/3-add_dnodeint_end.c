#include "lists.h"
/**
 * add_dnodeint_end - add node at tail of double-link list
 * @head: pointer to  first node of the list
 * @n: the number inside the new added  node
 * Return: pointer to the new node  if added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *move, *new = NULL;

	if (head)
		new = malloc(sizeof(dlistint_t));
	if (new)
	{
		move = *head;
		while (move && move->next)
			move = move->next;
		new->n = n;
		new->prev = move;
		new->next = NULL;
		if (move)
			move->next = new;
		else
			*head = new;
	}
	return (new);
}
