#include "lists.h"
/**
 * add_dnodeint - add node at start of double-link list
 * @head: pointer to  first node of the list
 * @n: the number inside the new added  node
 * Return: pointer to the new node  if added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head)
		new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->prev = NULL;
		if (*head)
		{
			new->prev = (*head)->prev;
			(*head)->prev = new;
		}
		new->next = *head;
		*head = new;
	}

	return (new);
}
