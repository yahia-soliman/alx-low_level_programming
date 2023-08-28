#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer  to the first node  of the list
 * @n:    the  number  to  add  in  the  new node
 *
 * Return: pointer to the new node ;)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	new = *head;
	if (new)
	{
		while (new && new->next)
			new = new->next;
		new->next = malloc(sizeof(*new));
		new = new->next;
	}
	else
		new = *head = malloc(sizeof(*new));

	new->n = n;
	new->next = NULL;
	return (new);
}
