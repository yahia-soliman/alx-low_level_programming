#include "lists.h"
/**
 * get_nodeint_at_index - gives a pointer to the nth node of a list
 * @head:  pointer to the first node of the linked list
 * @index: of the needed node (starting from 0)
 *
 * Return: the needed node if it exists
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index--)
		head = head->next;

	return (head);
}
