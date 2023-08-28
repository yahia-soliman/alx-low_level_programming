#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a node at the nth position of a list
 * @head:     pointer to     pointer to the first node of the linked list
 * @idx:    the position of the new node (starting from 0)
 * @n: the value of the integer to store inside the new node
 *
 * Return: the needed node if it exists
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pre = NULL, *new = NULL, *nxt = NULL;

	if (head)
		nxt = *head;

	while (nxt && idx)
	{
		idx--;
		pre = nxt;
		nxt = nxt->next;
	}

	if (head && idx == 0)
	{
		new = malloc(sizeof(*new));
		if (new)
		{
			new->n = n;
			new->next = nxt;
			if (pre)
				pre->next = new;
			else
				*head = new;
		}
	}

	return (new);
}
