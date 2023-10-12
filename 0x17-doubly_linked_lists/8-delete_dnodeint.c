#include "lists.h"
/**
 * delete_dnodeint_at_index - in a doubly linked list
 * @head: the node at index 0
 * @index: of the node to delete
 * Return: 1 if successfully deleted a node  0 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = NULL;

	if (head)
		del = *head;
	if (del && index == 0)
		*head = del->next;

	while (del && index > 0)
		del = del->next, index--;

	if (del && index == 0)
	{
		if (del->next)
			del->next->prev = del->prev;
		if (del->prev)
			del->prev->next = del->next;
		free(del);
		return (1);
	}
	return (-1);
}
