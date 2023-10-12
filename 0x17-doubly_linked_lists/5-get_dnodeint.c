#include "lists.h"
/**
 * get_dnodeint_at_index - form a doubly linked list
 * @head: the node at index 0
 * @index: of the wanted node
 * Return: the node at the given index if found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index > 0)
		head = head->next, index--;
	return (head);
}
